/**
 * @file mongodb_handler2.h
 * @author Kendall Martinez Carvajal (kendallmc@estudiantec.cr)
 * @brief Este codigo contiene la definicion de los metodos para manipular la informacion
 *  que se le pasa a la base de datos correspondiente a la metadata.
 *
 *  @version 1.0
 *
 *  @copyright Copyright (c) 2021
 */

#pragma once
#include <cstdint>
#include <string>
#include <iostream>
#include "bsoncxx/builder/stream/document.hpp"
#include "bsoncxx/json.hpp"
#include "bsoncxx/oid.hpp"
#include "mongocxx/client.hpp"
#include "mongocxx/database.hpp"
#include "mongocxx/uri.hpp"

namespace Metadata {
    constexpr char kMongoDbUri[] = "mongodb://0.0.0.0:27017";
    constexpr char kDatabaseName[] = "TECGallery";
    constexpr char kCollectionName[] = "Metadata_info";

    class MongoDbMetaHandler {
    public:
        /**
         * @brief Este es el metodo destructor de la clase.
         */
        MongoDbMetaHandler()
                : uri(mongocxx::uri(kMongoDbUri)),
                  client(mongocxx::client(uri)),
                  db(client[kDatabaseName]) {}
        /**
         * @brief Ete metodo se encarga de anadir la metadata correspondiente a la base de datos
         * @param img_name A string
         * @param img_autor A string
         * @param creation_year A string
         * @param height A string
         * @param description A string
         * @param user_name A string
         * @return A bool
         */
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
        /**
         * @brief ESte metodo se encarga de remover la metadata ed una imagen
         * @param img_name A string
         * @return A bool
         */
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
        /**
         * @brief Este metodo se encarga de obtener la metadata de una imagen
         * @param img_name A string
         * @return A bool
         */
        std::string getMetadata(const std::string &img_name){
            mongocxx::collection collection = db[kCollectionName];
            bsoncxx::stdx::optional<bsoncxx::document::value> maybe_result = collection.find_one({});

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
                std::string resultado;
                resultado = "Nombre de la imagen: "+query_img_name+"\n"
                        + "Autor: "+query_autor+"\n"
                        + "Año de creacion: "+query_creation_year+"\n"
                        + "Tamaño de la imagen: "+query_height+"\n"
                        + "Descripcion: "+query_description+"\n";
                return resultado;
            } else{
                return "Imagen no encontrada";
            }
        }
        /**
         * @brief Este metodo se encarga de actualizar la metadata de una imagen
         * @param img_name A string
         * @param new_img_name A string
         * @param new_autor A string
         * @param new_creation_year A string
         * @param new_height A string
         * @param new_description A string
         * @return A bool
         */
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
