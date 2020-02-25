//File name: lab07.cpp
//Programmer: McFarlane, Duncan
//Date: 2/11/2020
//Purposes,
// program 1: Calculate the Area of a pentagon based on radius
// program 2: To calculate the area of a polygon based on
// side length and number of sides
#include "iostream"
#include <math.h>
using namespace std;
#define prog 1
#if prog == 1
int main()
{
    const double PI = 3.14159265;
    double radius = 0.0;
    double sidelength = 0.0;
    double area = 0.0;

    cout << "Enter the lenth from the center to a vertex:";
    cin >> radius;

    sidelength = 2.0*radius *sin(PI / 5.0);
    area = (5.0 * pow(sidelength, 2.0)) / (4 * tan(PI / 5.0));
    area = static_cast<int>(area * 100) / 100.0;

    cout << "The length of the pentagon is " << area << endl;

    return 0;
}
#elif prog == 2
int main() {
    const double PI = 3.14159265;
    int side_num = 0;
    double sidelength = 0.0;
    double area = 0.0;

    cout << "Enter the number of sides:";
    cin >> side_num;
    cout << "Enter the side:";
    cin >> sidelength;

    area = (side_num * pow(sidelength, 2.0)) / (4.0 * tan(PI /
    static_cast<double>(side_num)));
    area = static_cast<int>(area * 100) / 100.0;

    cout << "The area of the pentagon is " << area;
    
    return 0;
}
#endif