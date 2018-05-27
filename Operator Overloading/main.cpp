#include <iostream>
#include "Burrito.h"
using namespace std;
int main() {
  Burrito a(25); //Burrito Object
  Burrito b(15); //Another Burrito Object
  Burrito c; //PlaceHolder object

  c = a+b; //Overloads the addition operator.
  cout << c.num << endl;

return 0;
}