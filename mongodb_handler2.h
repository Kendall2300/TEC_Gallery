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
        MongoDbMetaHandler()
                : uri(mongocxx::uri(kMongoDbUri)),
                  client(mongocxx::client(uri)),
                  db(client[kDatabaseName]) {}
        bool AddMetadataToDb(const std::string &img_name,
                         const std::string &img_autor,
                         const std::string &creation_year,
                         const std::string &height,
                         const std::string &description) {
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

    private:
        mongocxx::uri uri;
        mongocxx::client client;
        mongocxx::database db;
    };
}