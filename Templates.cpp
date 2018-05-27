#include <iostream>
using namespace std;

//Creates a template
template <class burrito>

//replace variable types with the template name
burrito addValues(burrito a, burrito b){
  return a+b;
};


int main(){
  
  // variable z is an empty holder with no initial value.
  double x=3.14159, y=2.71828, z;
  
  /* Doesn't matter what the variable type when calling the function outside the main. Will run as long as they're all the same variable type data. */
  z = addValues(x,y);
  
  cout << z << endl;
  
  return 0;
};

/* 

Templates are used whenever you are dealing with a whole bunch of data that are the same variable types. You may create a template that replaces the variable type name and it would run when called based on the variable type inside the main function.

*/