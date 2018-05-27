#include <iostream>
using namespace std;

template <class T>

class burrito{
  T first, second;
  
  public:
    burrito(T a, T b){
      
      first = a;
      second = b;
      }
    T bigger();
};

//Whenever you need to use this template again, it must be retyped.
template <class T>

//Layout of creating the function
T burrito<T>::bigger(){
    return(first > second ? first:second);
};


int main() {
  //when creating the object for the function, an argument has to be declared for the generic template
  burrito <int>bo(3500, 2000);
  
 cout << bo.bigger();
  
  return 0;
}