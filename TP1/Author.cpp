#include "Author.h"

Author::Author(const std::string& id, const std::string& lastname, const std::string& name, const Date& birth_date)
:id_(id), lastname_(lastname), name_(name), birth_date_(birth_date)
{
}

std::string Author::id() const
{
    return id_;
}

std::string Author::lastname() const
{
    return lastname_;
}

std::string Author::name() const
{
    return name_;
}

Date Author::birthDate() const
{
    return birth_date_;
}