// Programmer: Duncan McFarlane
// Date: 01/21/2020
// Compiler Used: MS Visual C++ 2017
// Purpose: First Program in C++.
#include <iostream>
#include <string>
using namespace std;
int main() {
    // First Program
    cout << "Hello World!" << endl;
    cout << endl;

    // Excercise 1.1 (Display three messages)
    string welcomeMsg = "Welcome to C++";
    cout << welcomeMsg << endl;
    cout << "Welcome to Computer Science" << endl;
    cout << "Programming is fun" << endl;
    cout << endl;


    // Excercise 1.2 (Display five messages)
    cout << welcomeMsg << endl;
    cout << welcomeMsg << endl;
    cout << welcomeMsg << endl;
    cout << welcomeMsg << endl;
    cout << welcomeMsg << endl;
    cout << endl;


    // Excercise 1.3 (Display a pattern)
    cout << " CCCC + + " << endl;
    cout << " C + + " << endl;
    cout << "C +++++++ +++++++" << endl;
    cout << " C + + " << endl;
    cout << " CCCC + + " << endl;
    cout << endl;

    
    // Indicates that program completed sucessfully
    return 0;
}