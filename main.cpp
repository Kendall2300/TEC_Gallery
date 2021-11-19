#include <iostream>
#include "mongocxx/instance.hpp"
#include "mongodb_handler.h"
#include "mongodb_handler2.h"

void print_result(const bool &result, const char* operation) {
    std::cout << "the " << operation << (result ? " worked" : " didn't work.") << std::endl;
}

int main() {
    mongocxx::instance instance;
    Users::MongoDbUserHandler mhandler;
    //mhandler.AddUserToDb("Daniel","pruebasdepassword");
    //mhandler.AddUserToDb("Haruto","harutoisspring");
    //mhandler.RemoveUserFromDb("Haruto");
    //std::cout<<"Added"<<std::endl;

    return 0;
}