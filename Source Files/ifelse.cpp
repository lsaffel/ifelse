#include <iostream>
using namespace std;

int main()
{
    // user enters integer number
    // program writes out if that number is even or odd

    // cout << 2 % 2 << std::endl;     // result is 0 = remainder from 2 / 2
    // cout << 7 % 5 << std::endl;     // result is 2 = remainder from 7 / 5

    int number;
    cout << "Please enter a whole number:";
    cin >> number;

    if (number % 2 == 0) 
    {
        cout << "You have entered an even number." << endl;
    }
    else
    {
        cout << "You have entered an odd number." << endl;
    }
    cout << "Thanks. Bye.";
}