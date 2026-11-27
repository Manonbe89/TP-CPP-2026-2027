#include "Loan.h"

Loan::Loan(const Date &loan_date, int isbn, const std::string &id)
:loan_date_(loan_date), isbn_(isbn), id_(id)
{
}

Date Loan::loan_date() const
{
    return loan_date_;
}

int Loan::isbn() const
{
    return isbn_;
}

std::string Loan::id() const
{
    return id_;
}
