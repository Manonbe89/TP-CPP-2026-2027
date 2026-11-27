#include "Book.h"

int main() {
    Date date1(27, 11, 2026);
    Book book1("GDCP", "Shannon", "English", "Fantastique", date1, 1234);
    std::cout << book1.type();
}