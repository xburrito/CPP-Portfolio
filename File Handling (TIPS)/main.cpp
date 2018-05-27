#include <iostream>
#include <fstream>
using namespace std;

int main() {

  //associate the file to the object on just 1 line of code
  ofstream burritoFile("spicy.txt");
    if(burritoFile.is_open){
        cout << "AYEE the file is open and ready to go\n";
    }
    else{
      cout << "FILE NOT OPENED!";
    }

  burritoFile << "Spicy Burritos are the best!" << endl;
  burritoFile.close();

return 0;
}