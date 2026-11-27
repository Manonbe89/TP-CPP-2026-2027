#include "Reader.h"

Reader::Reader(std::string id, std::string lastname, std::string name)
: id_(id), lastname_(lastname), name_(name), list_isbn_({})
{
}

std::string Reader::id()
{
    return id_;
}

std::string Reader::lastname()
{
    return lastname_;
}

std::string Reader::name()
{
    return name_;
}

std::vector<int> Reader::list_isbn()
{
    return list_isbn_;
}
