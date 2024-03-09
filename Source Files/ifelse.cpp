#include <iostream>
using namespace std;

int main()
{
    // user enters integer number
    // program writes out if that number is even or odd

    // cout << 2 % 2 << std::endl;     // result is 0 = remainder from 2 / 2
    // cout << 7 % 5 << std::endl;     // result is 2 = remainder from 7 / 5

    // a simple if else statement
    // int number;
    // cout << "Please enter a whole number:";
    // cin >> number;

    // if (number % 2 == 0) 
    // {
    //     cout << "You have entered an even number." << endl;
    // }
    // else
    // {
    //     cout << "You have entered an odd number." << endl;
    // }
    // cout << "Thanks. Bye.";
    // --------------- next if else problem ----------------------------
    // user enters the side lengths of a triangle (a,b,c)
    // program should write out whether that triangle is equilateral, isosceles or scalene.
    // equilateral: has all 3 sides the same length
    // iscosceles: has 2 sides the same length
    // scalene: has all 3 sides of a different length

    float a, b, c;
    cout << "a, b, c:";
    cin >> a >> b >> c;

    // if (a==b && b==c)
    // {
    //     cout << "Equilateral triangle";
    // }
    // else{
    //     if (a != b && a !=c && b != c)
    //     {
    //         cout << "Scalene triangle";
    //     }
    //     else
    //     {
    //         cout << "Isosceles triangle";
    //     }
    // }

    // same code as above, but with several {} removed. If 
    // what is in the if or else is only one line (statement),
    // then the {} aren't necessary

        if (a==b && b==c)
            cout << "Equilateral triangle";
        else
        {
            if (a != b && a !=c && b != c)
                cout << "Scalene triangle";
            else
                cout << "Isosceles triangle";
        }
    }