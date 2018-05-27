#include <iostream>
#include <string>
using namespace std;

int main() {

//STRING SUBSTRING
  string s1("OMG I think I am Preggy!!!");
//Will go to the 17th character of the string and store the first 7 characters following that.
  cout << s1.substr(17, 7) << endl;
//Substring is what's used to create a smaller string from a big string.

//SWAPPING
string one("Apples ");
string two("Beans ");

cout << one << two << endl;
one.swap(two); //Swaps the two strings
cout << one << two << endl;

//FINDING
  string uno("ham is Spam oh Yes I am!");
  cout << s1.find("am") << endl;
  
  //rfind stands for Reverse find
  cout << s1.rfind("am") << endl;

return 0;
}

//NOTE: Strings are just ARRAYS of characters!!!