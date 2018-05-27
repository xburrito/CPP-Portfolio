#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main() {
  
  Birthday birthObj(4, 1, 1900);
  
  People Burrito("Spicy Burrito", birthObj);
  Burrito.printInfo();
  
  return 0;
};


// Composition is using objects from one class in another class.