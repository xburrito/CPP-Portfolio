#include <iostream>
#include <string>
using namespace std;

int main() {
  
	int a;  // Declare integer a with value
	int b; // Declare integer b with value
	
	cout << "Please enter an integer: ";
	cin >> a;
	cout << "Please enter another integer: ";
	cin >> b;

	int sum = a + b; // Declare integer sum with the sum value of a and b

	cout << sum;
	return 0;
	
}

//The "cout" statement prints out values or text while the "cin" statement requests information from the user.