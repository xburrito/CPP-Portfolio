#include <iostream>
using namespace std;

//The generic template
template<class T>
class burrito{
  public: 
    burrito(T x){
      cout << x << " is not a character!" << endl;
    }
};

//Template specialization allows for certain datatype values to run off a different function.
template<>
class burrito<char>{
  public:
    burrito(char x){
      cout << x << " is indeed a character!" << endl;
    }
};

int main() {
  
  burrito<char> object1('d');
  burrito<double> object2(3.141592);
  burrito<int> object3(66);
  
  return 0;
}