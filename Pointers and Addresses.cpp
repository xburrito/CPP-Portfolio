#include <iostream>
using namespace std;
int main() {
	int fish = 15;
	int *fishPtr;

	fishPtr = &fish;

	cout << fishPtr << endl;
  cout << &fish << endl;

	return 0;
}

//Create a pointer variable that only points to the address of another variable created that holds data.