#include <iostream>
#include "mongocxx/instance.hpp"
#include "mongodb_handler.h"

void print_result(const bool &result, const char* operation) {
    std::cout << "the " << operation << (result ? " worked" : " didn't work.") << std::endl;
}

int main() {
    mongocxx::instance instance;
    learning::MongoDbHandler mhandler;
    mhandler.AddCharacterToDb("Daniel",learning::CharacterSize::kMedium,2);
    std::cout<<"Added"<<std::endl;
    return 0;
}