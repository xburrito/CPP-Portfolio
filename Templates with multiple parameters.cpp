#include <iostream>
using namespace std;

//This template contains two generic data types.
template <class Fvalue, class Svalue>

//NOTE: Having this function with the template Fvalue means that whatever value returned, it must be the data type assigned to this class.
Fvalue Burrito(Fvalue a, Svalue b){
  
  //if a is less than b, return a, else return b
  return(a<b?a:b); 
};


int main() {
  
  int x = 66;
  double y = 3.141592;
  double z;
  
  z = Burrito(x,y);
  
  cout << z << endl;
  
  
  return 0;
}

//NOTE: When compiling, though the smaller value was indeed 3.141592, the compiler simply returns 3 because this y value was a double but it gets return as an integer simply because of the nature of the data type assigned to the function Burrito. 