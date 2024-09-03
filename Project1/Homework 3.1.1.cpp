#include <iostream>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER,
};

const char* monthNames[] = {
    "",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "Octomber",
    "November",
    "December"
};

int main() {
    int monthNumber;

    std::cout << "Enter month number (1 - 12) or 0 to exit: ";

    while (true) {
        std::cin >> monthNumber;

        if (monthNumber == 0) {
            std::cout << "You exit from programm" << std::endl;
            break;
        }

        if (monthNumber < 1 || monthNumber > 12) {
            std::cout << "Invalid month number. Please try again." << std::endl;
        }
        else {
            std::cout << "Month: " << monthNames[monthNumber] << std::endl;
        }

        std::cout << "Enter month number (1 - 12) or 0 to exit: ";
    }

    return 0;
}