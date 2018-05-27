#include <iostream>
using namespace std;

int main() {
	try {
		int num1;
		cout << "Enter first number: ";
		cin >> num1;

		int num2;
		cout << "Enter second number: ";
		cin >> num2;

		if (num2 == 0) {
			throw 0;
		}
	} catch (...) { // The "..." in this code is used to catch anything thrown!

		cout << "ERROR IN THE MATRIX!";
	}
	return 0;
}