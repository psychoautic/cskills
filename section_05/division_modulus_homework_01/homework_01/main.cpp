/*Problem #1: Averages
 ● Write a program that reads 5 numbers and print the following:
 ○ A) Their average
 ○ B) The sum of the first 3 numbers divided by the sum of the last 2 numbers
 ○ C) The average of the first 3 numbers divided by the average of the last 2 numbers.
 ○ What is the math relation between B and C*/

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    cout << (a + b + c + d + e) / 5 << endl;
    cout << (a + b + c) / (d + e) << endl;
    cout << ((a + b + c) / 3) / ((d + e) / 2) << endl;
}