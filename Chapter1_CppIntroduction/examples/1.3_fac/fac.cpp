//Computes and prints n! for a given n.
// Uses several basic elements of C++.

#include <iostream>
using namespace std;

int main() {
    // Declarations of variables
    //Both ways to Declare and Initialize a variable
    //C way
    int factArg = 0;
    //C++ way
    int fact (1);

    do
    {
        cout << "Factorial of: ";
        cin >> factArg;
        if(factArg < 0)
        {
            cout << "No negative values, please!" << endl;
        }
    }
    while(factArg < 0);

    int i = 2;
    while( i<= factArg)
    {
        fact = fact*i;
        i = i+1;
    }
    cout << "The Factorial of " << factArg << " is: " << fact << endl;

    return 0;
}
