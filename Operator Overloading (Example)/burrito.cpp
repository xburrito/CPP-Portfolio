#include <iostream>
#include <string>
#include "burrito.h"
using namespace std;

burrito::burrito()
{ };

burrito::burrito(int a)
{
  num = a;
};

burrito burrito::operator+(burrito bur)
{
  burrito goodStuff;
  goodStuff.num = num + bur.num;
  return(goodStuff);
};