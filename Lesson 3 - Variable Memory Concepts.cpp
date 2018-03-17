#include <iostream>
using namespace std;
int main()

{
    int burrito = 99; // Declare tuna and set it equal to 99. This is placed in a memory location.

    burrito = 76; // Replaces the value of tuna in the same location.

    cout << burrito << endl; // Prints out 76.

    return 0;
}

/*
    Whenever a variable is assigned another value, the old value will get overwritten and be replaced by the new value. Hence, the value of tuna is 76 instead of 99.  

*/