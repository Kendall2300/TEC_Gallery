/**
 * @file mainwindow.h
 * @authors Kendall Martinez && Gabriel Cerdas
 * @brief Este codigo contiene las declaraciones de las llamadas necesarias para utilizar la base de datos de la metadata por medio de mongo
 *
 * @version 1.0
 */
#pragma once

#include <cstdint>
#include <string>
#include <iostream>
#include "vector"
#include "bsoncxx/json.hpp"
#include "mongocxx/client.hpp"
#include "mongocxx/stdx.hpp"
#include "mongocxx/uri.hpp"
#include "mongocxx/instance.hpp"
#include "mongocxx/database.hpp"
#include "bsoncxx/builder/stream/helpers.hpp"
#include "bsoncxx/builder/stream/document.hpp"
#include "bsoncxx/builder/stream/array.hpp"


namespace Metadata {
    constexpr char kMongoDbUri[] = "mongodb://0.0.0.0:27017";
    constexpr char kDatabaseName[] = "TECGallery";
    constexpr char kCollectionName[] = "Metadata_info";

    class MongoDbMetaHandler {
    public:
        MongoDbMetaHandler()
                : uri(mongocxx::uri(kMongoDbUri)),
                  client(mongocxx::client(uri)),
                  db(client[kDatabaseName]) {}

        bool AddMetadataToDb(const std::string &img_name,
                         const std::string &img_autor,
                         const std::string &creation_year,
                         const std::string &height,
                         const std::string &description,
                         const std::string &user_name) {
            mongocxx::collection collection = db[kCollectionName];
            auto builder = bsoncxx::builder::stream::document{};

            bsoncxx::v_noabi::document::value doc_value =
                    builder << "Img_name" << img_name
                            << "Autor" << img_autor
                            << "Creation_year" << creation_year
                            << "Height" << height
                            << "Description" << description
                            << bsoncxx::builder::stream::finalize;

            bsoncxx::stdx::optional<mongocxx::result::insert_one> maybe_result =
                    collection.insert_one(doc_value.view());

            if(maybe_result) {
                return maybe_result->inserted_id().get_oid().value.to_string().size() != 0;
            }
            return false;
        }

        bool RemoveMetadataFromDb(const std::string &img_name) {
            mongocxx::collection collection = db[kCollectionName];
            auto builder = bsoncxx::builder::stream::document{};

            bsoncxx::document::value doc =
                    builder << "Img_name" << img_name << bsoncxx::builder::stream::finalize;
            bsoncxx::stdx::optional<mongocxx::result::delete_result> maybe_result =
                    collection.delete_one(doc.view());

            if(maybe_result) {
                return maybe_result->deleted_count() == 1;
            }
            return false;
        }
        bool getMetadata(const std::string &img_name){
            mongocxx::collection collection = db[kCollectionName];
            auto builder = bsoncxx::builder::stream::document{};
            bsoncxx::document::value doc =
                    builder << "Img_name" << img_name << bsoncxx::builder::stream::finalize;
            bsoncxx::stdx::optional<bsoncxx::document::value> maybe_result = collection.find_one(doc.view());

            bsoncxx::document::view view = maybe_result->view();
            bsoncxx::document::element element1 = view["Img_name"];
            bsoncxx::document::element element2 = view["Autor"];
            bsoncxx::document::element element3 = view["Creation_year"];
            bsoncxx::document::element element4 = view["Height"];
            bsoncxx::document::element element5 = view["Description"];

            std::string query_img_name = element1.get_utf8().value.to_string();
            std::string query_autor = element2.get_utf8().value.to_string();
            std::string query_creation_year = element3.get_utf8().value.to_string();
            std::string query_height = element4.get_utf8().value.to_string();
            std::string query_description = element5.get_utf8().value.to_string();

            if (img_name==query_img_name){
                std::cout<<query_img_name<<std::endl;
                std::cout<<query_autor<<std::endl;
                std::cout<<query_creation_year<<std::endl;
                std::cout<<query_height<<std::endl;
                std::cout<<query_description<<std::endl;
            } else{
                std::cout<<"Image not found"<<std::endl;
            }
        }
        bool updateMetadata(const std::string &img_name,
                            const std::string &new_img_name,
                            const std::string &new_autor,
                            const std::string &new_creation_year,
                            const std::string &new_height,
                            const std::string &new_description) {
            mongocxx::collection collection = db[kCollectionName];
            auto builder = bsoncxx::builder::stream::document{};


            bsoncxx::document::value query_doc =
                    builder << "Img_name" << img_name
                            << bsoncxx::builder::stream::finalize;
            bsoncxx::document::value update_doc =
                    builder << "$set" << bsoncxx::builder::stream::open_document
                    << "Img_name" << new_img_name
                    << "Autor" << new_autor
                    << "Creation_year" << new_creation_year
                    << "Height" << new_height
                    << "Description" << new_description
                    << bsoncxx::builder::stream::close_document
                            << bsoncxx::builder::stream::finalize;

            bsoncxx::stdx::optional<mongocxx::result::update> maybe_result =
                    collection.update_one(query_doc.view(), update_doc.view());

            if(maybe_result) {
                return maybe_result->modified_count() == 1;
            }
            return false;
        }

    private:
        mongocxx::uri uri;
        mongocxx::client client;
        mongocxx::database db;
    };
}
