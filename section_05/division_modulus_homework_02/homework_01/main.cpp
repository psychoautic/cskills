#include <iostream>
using namespace std;

int main()
{
    int num;

    cin >> num;

    bool is_even1 = (num % 2 == 0);

    bool is_even2 = (num / 2 == 0);

    bool is_even3 = num % 10 == 1;
}