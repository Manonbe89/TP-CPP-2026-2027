#include "Book.h"

Book::Book(const std::string &title, const Author &author, const std::string &language, const std::string &type, Date& date_publication, int isbn)
:title_(title), author_(author), language_(language), type_(type), date_publication_(date_publication), isbn_(isbn)
{
    list_isbn_ = {};
}

std::string Book::title() const
{
    return title_;
}

Author Book::author() const
{
    return author_;
}

std::string Book::language() const
{
    return language_;
}

std::string Book::type() const
{
    return type_;
}

Date Book::date_publication() const
{
    return date_publication_;
}

int Book::isbn() const
{
    return isbn_;
}

std::vector<int> Book::list_isbn() const
{
    return list_isbn_;
}