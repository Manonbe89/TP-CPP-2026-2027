#ifndef READER_H
#define READER_H
#include <string>
#include <vector>

class Reader {

    private : 
    std::string id_;
    std::string lastname_;
    std::string name_;
    std::vector<int> list_isbn_;

    public :
    Reader(std::string id, std::string lastname, std::string name);
    std::string id();
    std::string lastname();
    std::string name();
    std::vector<int> list_isbn();
};

#endif