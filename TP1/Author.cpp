#include "Author.h"

Author::Author(std::string id, std::string lastname, std::string name, Date birth_date)
:id_(id), lastname_(lastname), name_(name), birth_date_(birth_date)
{
}

std::string Author::id()
{
    return id_;
}

std::string Author::lastname()
{
    return lastname_;
}

std::string Author::name()
{
    return name_;
}

Date Author::birthDate()
{
    return birth_date_;
}