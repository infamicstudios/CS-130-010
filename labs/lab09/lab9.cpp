//File: lab9.cpp
//Name: Duncan, McFarlane
//Date: 2/18/2020
//Compiler used: MS Visual Studio 2017
//Purposes: program 1: generate 10 rand nums between a lower and upper bound
// program 2: replicate a given flow chart
// program 3: replicate a given flow chart
// program 4: output I incremented by 20 while it is less than 118 in two
//            different ways
// program 4: game where user has to guess the position of a randomly flipped
//            coin
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define prog 1
#if prog == 1
int main() {
    int lowBound, highBound, randomNumber = 0;
    srand((unsigned)time(NULL));

    cout << "Enter a lower bound:";
    cin >> lowBound;
    cout << "Enter an upper bound:";
    cin >> highBound;

    for (int i = 0; i < 10; i++) {
        randomNumber = lowBound + ( rand() % ( highBound - lowBound + 1 ) );
        cout << randomNumber <<" ";
    }
    return 0;
}

#elif prog == 2
int main() {
    const int START_INT = 10;
    const int END_INT = 100;
    const int FACTOR = 2;
    const int ITERATORVAL = 10;
    int counter = START_INT;

    while (counter < END_INT)
    {
        cout << counter * FACTOR << " ";
        counter += ITERATORVAL;
    }
    
    return 0;
}


#elif prog == 3
int main() {
    const int START_INT = 10;
    const int END_INT = 100;
    const int FACTOR = 2;
    const int ITERATORVAL = 10;
    int counter = START_INT;

    for (counter < END_INT, counter += 20)
    {
        cout << counter<< " ";
    }
    return 0;
}


#elif prog == 4
int main() {
    cout << "Output from the for-loop..."<<endl;

    for (int i = 0; i < 118; i +=9)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Output from the while-loop..."<<endl;
    int i = 0;
    while (i < 118)
    {
        cout << i << " ";
        i += 9
    }

    return 0;
}
#elif prog == 5
int main(){
    int userinput, Genned= 0;
    bool valid = true;

    cout << "I am flipping a coin, enter 1 <head> 0 <tail>:";
    cin >> userinput;

    srand(time(NULL));
    Genned = rand() % 2;

    if (userinput != 1 && userinput != 0)
    {
        cout << "Run the program again, bye!";
        valid = false;
    }
    else if (Genned == 0 && valid)
        cout << "The Computer Generated a \t TAIL"<<endl;
    else if (Genned == 1 && valid)
        cout << "The Computer Generated a \t HEAD" <<endl;

    if (userinput == Genned && valid)
        cout << "You guessed right!"<<endl;
    else if (userinput != Genned && valid)
        cout << "You guessed wrong!"<<endl;

    return 0;
}
#endif // !define prog = 1