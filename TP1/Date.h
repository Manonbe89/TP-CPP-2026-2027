#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

class Date {

    private : 
    int day_;
    int month_;
    int year_;
    
    public : 
    Date(int day, int month, int year);
    int day() const;
    int month() const;
    int year() const;
    bool isDate(int day, int month, int year);
};

#endif