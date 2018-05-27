#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1("Burritos are great");
  string s2;
  string s3;

  s2 = s1;
  s3.assign(s1); //Same as copying another string's values.

  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;

return 0;
}

//Similar to getline string function.