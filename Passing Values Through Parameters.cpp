#include <iostream>
using namespace std;

// This function takes a parameter.
void printNum(int x){
    cout << "Burrito's favorite numbner is " << x << endl;
}

int main()
{
    printNum(626); // Call the function.

    return 0;
}

// In this scenario, a function prototype was not needed because the function was defined before the main program. When calling the function from the main program, pass a value into the parameter of the function being called.