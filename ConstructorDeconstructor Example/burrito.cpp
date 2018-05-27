#include <iostream>
#include "burrito.h"
using namespace std;

burrito::burrito()
{
  cout << "I have ordered the burrito.(Constructor)\n" << endl; //Constructor
};

burrito::~burrito()
{
  cout << "Going to pay a generous tip.(Deconstructor)" << endl; //Deconstructor
}

//Deconstructors take in NO PARAMETERS AND RETURNS NOTHING!!!
//Basically a very simple function