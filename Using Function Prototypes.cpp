#include <iostream>

using namespace std;

void printSomething(); // Prototype the function. 

int main()
{
    printSomething(); // Call the function.

    return 0;
}

void printSomething(){ // Define the function.
    cout << "oooo i am text ont he screen" << endl;
}

// Make sure you prototype the function first before calling it in the main function. The only alternative would be to assign the function before the main program so no prototype would need to be declared in that case.