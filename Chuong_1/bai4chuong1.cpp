#include <iostream>
#include <cmath>
using namespace std;

struct DATE {
    int day;
    int month;
    int year;
};

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(DATE d) {
    int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    if (d.year < 1 || d.month < 1 || d.month > 12) {
        return false;
    }

    if (isLeapYear(d.year)) {
        daysInMonth[1] = 29;
    }

    if (d.day < 1 || d.day > daysInMonth[d.month - 1]) {
        return false;
    }

    return true;
}

int getDaysInYear(DATE d) {
    int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    if (isLeapYear(d.year)) {
        daysInMonth[1] = 29;
    }

    int days = 0;
    for (int i = 0; i < d.month - 1; i++) {
        days += daysInMonth[i];
    }
    days += d.day;

    return days;
}

int getDaysBetween(DATE d1, DATE d2) {
    int days = 0;

    if (d1.year == d2.year) {
        days = abs(getDaysInYear(d2) - getDaysInYear(d1));
    }
    else {
        for (int i = d1.year; i < d2.year; i++) {
            if (isLeapYear(i)) {
                days += 366;
            }
            else {
                days += 365;
            }
        }

        days -= getDaysInYear(d1) - 1;
        days += getDaysInYear(d2);
    }

    return days;
}

int main() {
    DATE date1, date2;
    cout << "Nhap ngay thu nhat: ";
    cin >> date1.day >> date1.month >> date1.year;

    if (!isValidDate(date1)) {
        cout << "Ngay thu nhat khong hop le!\n";
        return 1;
    }

    cout << "Nhap ngay thu hai: ";
    cin >> date2.day >> date2.month >> date2.year;

    if (!isValidDate(date2)) {
        cout << "Ngay thu hai khong hop le!\n";
        return 1;
    }

    int daysBetween = getDaysBetween(date1, date2);
    cout << "Khoang cach giua 2 ngay la " << daysBetween << " ngay." << endl;

    return 0;
}

