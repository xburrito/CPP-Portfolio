#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream burritoFile("spicy.txt");

  int id;
  string name;
  double money;

  while(burritoFile >> id >> name >> money){
    cout << id << " " << name << " " << money << endl;
  }
  
return 0;
}

//ofstream is used to write data to a file.
//ifstream is used to read data from a file.