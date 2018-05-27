#include "Burrito.h" // insert the header file
#include <iostream>

using namespace std;

Burrito::Burrito() // constructor (Binary Scope resolution                                     operator)
{
    cout << "i am a bananan" << endl;
}

//Cool background as to why this .cpp file is separated from the .h file.

//Basically this will hold the code for the .h file. When this is finalized and functional, if you want to share with other coders, all you simply have to do is share the .h file with other programmers so they don't actually get to modify this code but will still have easy access to it in their program.