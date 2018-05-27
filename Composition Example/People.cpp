#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo) //Semi-colon not needed
{
  
};

void People::printInfo(){
  cout << name << " was born on ";
  dateOfBirth.printDate();
};