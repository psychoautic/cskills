/* Write a program that reads an integer and returns the 4th digit from the right, if no such digit print 0*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int digit_4 = num % 10000;

    cout << digit_4 / 1000;
}