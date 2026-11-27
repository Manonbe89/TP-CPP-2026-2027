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
    Author(std::string id, std::string lastname, std::string name, Date birth_date);
    std::string id();
    std::string lastname();
    std::string name();
    Date birthDate();
};

#endif