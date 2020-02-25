// Filename: Lab2_1.cpp
// Programmer: Duncan McFarlane
// Date: 1/23/2020
// Compiler Used: MS Visual Studio 2017
// Purpose: Calculate the area and volume
// of a cylinder from its radius
#include <iostream>;
#include <cmath>;

using namespace std;

int main() {

    const double PI = 3.14159;
    double radius = 0.0;
    double length = 0.0;

    // Input
    // Get input values for radius and length
    cout << "Enter the radius and length of the cylinder:" ;
    cin >> radius >> length;

    // Processing
    // Calculate the volume and the area
    double area = pow(radius, 2.0) * PI;
    double volume = area * length;

    // Ouput
    // Output the calculated area and volume
    cout << "The area is " << area << endl;
    cout << "The volume is " << volume << endl;

    //Indicates that the program ran without any errors
    return 0;
};