#ifndef LOAN_H
#define LOAN_H
#include "Date.h"

class Loan {

    private :
    Date loan_date_;
    int isbn_;
    std::string id_;

    public :
    Loan(const Date& loan_date, int isbn, const std::string& id);
    Date loan_date() const;
    int isbn() const;
    std::string id() const;
};

#endif