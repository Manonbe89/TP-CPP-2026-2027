#ifndef BOOK_H
#define BOOK_H
#include "Author.h"
#include <vector>

class Book {

    private :
    std::string title_;
    Author author_;
    std::string language_;
    std::string type_;
    Date date_publication_;
    int isbn_;
    std::vector<int> list_isbn_;

    public :
    Book(const std::string &title, const Author &author, const std::string &language, const std::string &type, Date& date_publication, int isbn);
    std::string title() const;
    Author author() const;
    std::string language() const;
    std::string type() const;
    Date date_publication() const;
    int isbn() const;
    std::vector<int> list_isbn() const;
};
#endif