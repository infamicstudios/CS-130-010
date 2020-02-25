//File: LB05_1.cpp
//Name: Duncan, McFarlane
//Date: 2/4/2020
//Compiler used: MS Visual Studio 2017
//Purposes: To sort 3 integers
#include <iostream>
#include <cmath>
using namespace std;

#define prog 2
#if prog == 1
int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (a < b && a < c && b < c)
    {
        cout << a << ' ' << b << ' ' << c << endl;
    }
    else if (a < b && a < c && b > c)
    {
        cout << a << ' ' << c << ' ' << b << endl;
    }
    else if (a < b && a > c)
    {
        cout << c << ' ' << a << ' ' << b << endl;
    }
    else if (a > b && a < c)
    {
        cout << b << ' ' << a << ' ' << c << endl;
    }
    else if (a > b && a > c && b > c)
    {
        cout << c << ' ' << b << ' ' << a << endl;
    }
    else if (a > b && a > c && b < c)
    {
        cout << b << ' ' << c << ' ' << a << endl;
    }
    return 0;
}

#elif prog == 2
int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (a < b)
    {
        if (a < c)
        {
            if (b < c)
            {
                cout << a << ' ' << b << ' ' << c << endl; //test case 1
            }
            else
            {
                cout << a << ' ' << c << ' ' << b << endl; //test case 3
            }
        }
        else
        {
            cout << c << ' ' << a << ' ' << b << endl; // test case 4
        }
    }
    else
    {
        if (a < c)
        {
            cout << b << ' ' << a << ' ' << c << endl; // test case 5
        }
        else
        {
            if (b > c)
            {
                cout << c << ' ' << b << ' ' << a << endl; // test case 2
            }
            else
            {
                cout << b << ' ' << c << ' ' << a << endl; // test case 6
            }
        }
    }
    return 0;
}
#endif