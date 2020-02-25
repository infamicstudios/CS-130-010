//filename: lab03.cpp
//Programmer: Duncan McFarlane
//Date: 1/28/2020
//Compiler Used: VS 2017
//Purposes,
// Program 1: Desmonstrate the ability to use time(),
// static_cast, and increment operators.
// Program 2: Calculate accumulated interest from
// initial investment, rate and years.
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

#define prog 1

#if prog == 1
int main() {
    int intval0 = 0;
    int intval1 = 0;
    double quotient = 0.0;
    int incrementedVal;

    cout << "Number of seconds since UNIX Epoch: " << time(0) << endl;
    cout << "Enter 11 and 2 which will be saved in two integer variables:";
    cin >> intval0 >> intval1;

    quotient = static_cast<double> (intval0)/intval1;

    cout << "The Quotient = " << quotient << endl;
    cout << "Enter an integer: ";
    cin >> incrementedVal;

    cout << "The pre-incremented value = " << ++incrementedVal;
    return 0;
}
#elif prog == 2

int main() {

    double invst = 0.0;
    double intrstRate = 0.0;
    double numYears = 0.0;
    double accumVal = 0.0;

    cout << "Enter investment amount: ";
    cin >> invst;
    cout << "Enter annual interest rate in percentage: ";
    cin >> intrstRate;

    // Convert to a monthly percentage
    intrstRate /= 12;
    intrstRate /= 100;
    cout <<"Enter number of years: ";
    cin >> numYears;
    
    // This is the equation for annual interest rate
    accumVal = invst * pow(1.0 + intrstRate, numYears * 12.0);
    cout << "Accumulated value is $" << accumVal;
    return 0;
}
#endif