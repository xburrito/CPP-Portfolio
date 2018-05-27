#include <iostream>
#include <string>
#include "burrito.h"
using namespace std;

int main() {
  burrito a(22);
  burrito b(36);
  burrito c;
  
  c = a+b;
  
  cout << c.num << endl;
};