#ifndef AUTHOR_H
#define AUTHOR_H
#include "Date.h"

class Author {
    private :
    std::string id_;
    std::string lastname_;
    std::string name_;
    Date birth_date_;

    public :
    Author(const std::string& id, const std::string& lastname, const std::string& name, const Date& birth_date);
    std::string id() const;
    std::string lastname() const;
    std::string name() const;
    Date birthDate() const;
};

#endif