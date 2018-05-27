#include <iostream> // Used to input/read data to/from file
#include <fstream> // Used to work with files
using namespace std;

int main() {

  ofstream burritoFile; //Writing files through objects

  //Creates a file if it doesn't exist within directory
  burritoFile.open("spicy.txt");

  burritoFile << "I love spicy burrito!!!";
  burritoFile.close();

return 0;
}