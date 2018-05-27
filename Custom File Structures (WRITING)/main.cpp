#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ofstream burritoFile("spicy.txt");
  
  cout << "Type in ID, name, money: " << endl;
  cout << "Type CTRL+Z to quit program..." << endl;

  int idNumber;
  string name;
  double money;

  while(cin >> idNumber >> name >> money){
      burritoFile << idNumber << ' ' << name << ' '
        << money << endl;
  }

  return 0;
}