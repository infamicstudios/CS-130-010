// Filename: Lab04.cpp
// Programmer: Duncan McFarlane
// Date: 01/30/2020
// Compiler: VS 2017
// Purpose: Calculate water usage for
// the allenton water department.
#include <iostream>
using namespace std;

int main() {
    const double COST_PER_THOUSAND_GALLONS = 7.0;
    const double MIN_COST = 16.67;
    double curNumGallons = 0.0;
    double prevNumGallons = 0.0;
    double totalGallons = 0.0;
    double totalcost = 0.0;

    cout << "\tWATER BILL CALCULATIONS\n";
    cout << "Enter the current meter reading: ";
    cin >> curNumGallons;
    cout << "Enter the previous meter reading: ";
    cin >> prevNumGallons;

    totalGallons = curNumGallons - prevNumGallons;
    if ((totalGallons * COST_PER_THOUSAND_GALLONS) < COST_PER_THOUSAND_GALLONS)
        totalcost = MIN_COST;
    else
        totalcost = totalGallons * COST_PER_THOUSAND_GALLONS / 1000.0;

    //Slice anything past hundreths because it it is a monitary value
    totalcost = static_cast<int>(totalcost * 100) / 100;

    cout << "Gallons used = " << totalGallons << " Total charge = $" << fixed << (totalcost);
    return 0;
}