#include "Book.h"
#include "Loan.h"

int main() {
    Date date1(27, 11, 2026);
    Date date_birth(1, 1, 2000);
    Author author1("0", "Messenger", "Shanon", date_birth);
    Book book1("GDCP", author1, "English", "Fantastique", date1, 1234);
    Loan loan1(date1, 11, "truc");
    std::cout << loan1.id();
}