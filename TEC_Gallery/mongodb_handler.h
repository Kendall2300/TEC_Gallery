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




namespace Users {
    constexpr char kMongoDbUri[] = "mongodb://0.0.0.0:27017";
    constexpr char kDatabaseName[] = "TECGallery";
    constexpr char kCollectionName[] = "Users";

    class MongoDbUserHandler {
    public:
        MongoDbUserHandler()
                : uri(mongocxx::uri(kMongoDbUri)),
                  client(mongocxx::client(uri)),
                  db(client[kDatabaseName]) {}

        bool AddUserToDb(const std::string &user_name,
                              const std::string &user_pass) {
            mongocxx::collection collection = db[kCollectionName];
            auto builder = bsoncxx::builder::stream::document{};

            bsoncxx::v_noabi::document::value doc_value =
                    builder << "User_name" << user_name
                            << "Password" << user_pass <<bsoncxx::builder::stream::finalize;

            bsoncxx::stdx::optional<mongocxx::result::insert_one> maybe_result =
                    collection.insert_one(doc_value.view());

            if(maybe_result) {
                return maybe_result->inserted_id().get_oid().value.to_string().size() != 0;
            }
            return false;
        }

        bool RemoveUserFromDb(const std::string &user_name) {
            mongocxx::collection collection = db[kCollectionName];
            auto builder = bsoncxx::builder::stream::document{};

            bsoncxx::document::value doc =
                    builder << "User_name" << user_name << bsoncxx::builder::stream::finalize;
            bsoncxx::stdx::optional<mongocxx::result::delete_result> maybe_result =
                    collection.delete_one(doc.view());

            if(maybe_result) {
                return maybe_result->deleted_count() == 1;
            }
            return false;
        }
        bool getUserPass(const std::string &user_name, const std::string &password){
            mongocxx::collection collection = db[kCollectionName];
            bsoncxx::stdx::optional<bsoncxx::document::value> maybe_result = collection.find_one({});

            bsoncxx::document::view view = maybe_result->view();
            bsoncxx::document::element element1 = view["Password"];
            bsoncxx::document::element element2 = view["User_name"];

            std::string query_password = element1.get_utf8().value.to_string();
            std::string query_user_name = element2.get_utf8().value.to_string();

            if (user_name==query_user_name){

                if(password==query_password){
                 //std::cout<<"True"<<std::endl;
                    return true;
                }
                //std::cout<<"False"<<std::endl;
            } else{
                std::cout<<"Wrong user name"<<std::endl;
            }
        }

        bool updatePassword(const std::string &user_name, const std::string &new_password) {
            mongocxx::collection collection = db[kCollectionName];
            auto builder = bsoncxx::builder::stream::document{};


            bsoncxx::document::value query_doc =
                    builder << "User_name" << user_name
                            << bsoncxx::builder::stream::finalize;
            bsoncxx::document::value update_doc =
                    builder << "$set" << bsoncxx::builder::stream::open_document << "Password"
                            << new_password << bsoncxx::builder::stream::close_document
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
