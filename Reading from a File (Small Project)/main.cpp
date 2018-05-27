#include <iostream>
#include <fstream>
using namespace std;

//Prototype Functions!!!
int getwhatTheyWant();
void displayItems(int x);

// Main Function
int main() {
	int whatTheyWant = getwhatTheyWant();
  string instructions();
  while(whatTheyWant != 4){

      switch(whatTheyWant){
        case 1:
            displayItems(1);
            cout << endl;
          break;
        case 2:
            displayItems(2);
            cout << endl;
          break;
        case 3:
            displayItems(3);
            cout << endl;
          break;
        default:
            cout << "Not a valid menu option.\n\n";
          break;
      }
    whatTheyWant = getwhatTheyWant();
  }
	return 0;
}

// getwhatTheyWant Function
int getwhatTheyWant() {
  int choice;
    cout << "Please enter a choice from 1 to 4:" << endl;
      cout << "1 - Plain stuff" << endl;
      cout << "2 - The good stuff" << endl;
      cout << "3 - The not-so-good stuff" << endl;
      cout << "4 - Quit Program" << endl;
  cout << "Choice: ";   
  cin >> choice;
  cout << endl;

  return choice;
}

//Display Items Functions
void displayItems(int x){
  ifstream objectsFile("objects.txt");

  string name;
  double power;

    if (x==1){
      while(objectsFile >> name >> power){
        if (power==0){
          cout << name << " " << power << endl;
        }
      }
    }
    if (x==2){
      while(objectsFile >> name >> power){
        if (power > 0){
          cout << name << " " << power << endl;
        }
      }
    }
    if (x==3){
      while(objectsFile >> name >> power){
        if (power < 0){
          cout << name << " " << power << endl;
        }
      }
    }
}