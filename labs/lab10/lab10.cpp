//File: lab9.cpp
//Name: Duncan, McFarlane
//Date: 2/20/2020
//Compiler used: MS Visual Studio 2017
//Purposes: program 1: print out a multiplication Table
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int row = 1;
    int column = 0;
    const int NUMROWS = 4;
    const int NUMCOLUMNS = 10;

    for (row = 1; row < NUMROWS+1; row++)
    {
        for (column = -1; column < NUMCOLUMNS; column++)
        {
            if (column == -1)
                cout << setw(4) << row;
            else
                cout << setw(4) << row*column;
        }
        cout << endl;
    }
    return 0;
}

//File: lab9_1.cpp
//Name: Duncan, McFarlane
//Date: 2/20/2020
//Compiler used: MS Visual Studio 2017
//Purposes: program 1: print out a pyramid with a width given by the user
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int numPeak = 0;
    bool peaked = false;
    int i = 1;

    cout << "Enter how many charecters wide the peak of the pyramid should be:";
    cin >> numPeak;
    while (i > 0)
    {
        cout << string(i, '*') << endl;
        
        if (!peaked)
        {
            i++;
            peaked = (i == numPeak);

            if (peaked)
            {
                cout << string(i, '*') << endl;
            }
        }
        else
            i--;
    }
    return 0;
}