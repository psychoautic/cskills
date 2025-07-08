/*Write a program that takes input age as in numbers of days and computes the number of years, monthes and days in that age*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    int yrs = age / 365;
    int months = (age % 365) / 30;
    int days = (age % 365) % 30;

    cout << "Years: " << yrs << ", Months: " << months << ",Days: " << days << endl;
}