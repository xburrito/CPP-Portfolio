#include<iostream>
using namespace std;

template <class T>
T square(T x)
{ 
  return x*x;
}

int main()
{ 
  int x = 10;
  float y = 3.3;
  double z = 4.5;
 
 cout << "square of x: " << square(x) <<endl;
 cout << "square of y: " << square(y) <<endl;
 cout << "square of z: " << square(z) <<endl;
 
 return 0;
}
