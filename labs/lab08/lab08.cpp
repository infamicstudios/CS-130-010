//File name: lab08.cpp
//Programmer: McFarlane, Duncan
//Date: 2/13/2020
//Purposes,
// program 1: Output major and year based on input codes
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string inputval = "";
    string major = "";
    string year = "";
    int valid = 0;

    cout << "Enter two characters: ";
    cin >> inputval;

    switch (inputval.at(0))
    {
        case 'M':
        major = "Mathematics";
        break;

        case 'C':
        major = "Computer Science";
        break;

        case 'I':
        major = "Information Technology";
        break;

        default:
        valid = 1;
    }

    switch (inputval.at(1))
    {
        case '1':
        year = "Freshman";
        break;

        case '2':
        year = "Sophmore";
        break;

        case '3':
        year = "Junior";
        break;

        case '4':
        year = "Senior";
        break;

        default:
        valid = 2;
    }
    
    if (valid == 0)
        cout << major << " " << year;
    else if (valid == 1)
        cout << "Invalid major code";
    else if (valid == 2)
        cout << "Invalid status code";

    cout << endl;
    return 0;
}