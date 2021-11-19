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
        bool getUserPass(){

        }

    private:
        mongocxx::uri uri;
        mongocxx::client client;
        mongocxx::database db;
    };
}