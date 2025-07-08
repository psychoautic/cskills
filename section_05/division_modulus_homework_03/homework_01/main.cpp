/*Write a prorgam that reads an integer and returns 100 if even, and 7 if odd.*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int is_even = num % 2 == 0;
    int is_odd = 1 - is_even;

    cout << is_even * 100 + is_odd * 7;
}