#include <iostream>
#include "Burrito.h"
using namespace std;

Burrito::Burrito()
{}

Burrito::Burrito(int a){
  num = a;
}
//ADDITION OPERATOR OVERLOAD
Burrito Burrito::operator+(Burrito aso){
  Burrito brandNew;
  brandNew.num = num + aso.num;
  return (brandNew);
}