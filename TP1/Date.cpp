#include "Date.h"

Date::Date(int day, int month, int year)
: day_(day), month_(month), year_(year)
{
    if (isDate(day, month, year) == false) { 
        throw std::invalid_argument("Invalid date: " + std::to_string(day) + "/"  + std::to_string(month) + "/" + std::to_string(year)); 
    }
}

int Date::day() const
{
    return day_;
}

int Date::month() const
{
    return month_;
}

int Date::year() const
{
    return year_;
}

bool Date::isDate(int day, int month, int year)
{
    if ((day < 1) || (day>31)) 
        return false; 
    if ((month <1) || (month>12)) 
        return false; 
    if ((month == 2) && (day > 28)) 
        return false; 
    if (((month == 4) || (month == 6) || (month == 9)  || (month == 11)) && (day > 30)) 
        return false; 
    if(year < 0 || year > 2026)
        return false;
    return true;
}
