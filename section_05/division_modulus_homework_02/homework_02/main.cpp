/* Write a program that reads an integer and returns the sum of the last 3 digits*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    cin >> num;

    int digit_1 = num % 10;
    int digit_2 = num % 100;
    int digit_3 = num % 1000;

    int sum = digit_1 + digit_2 + digit_3;
    cout << sum;
}