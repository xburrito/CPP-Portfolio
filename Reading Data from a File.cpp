#include <iostream>
#include <string>
#include <iomanip>
#include <fstream> //contains file stream processing types
#include <cstdlib> // exit function prototype
using namespace std;

void outputLine(int, const string& name, double); // Prototype

int main() {
	//ofstream constructor opens file
	ifstream inClientFile{ "clients.txt", ios::out };

	//exit program if unable to create file
	if (!inClientFile) {//overloaded ! operator
		cerr << "File could not be opened" << endl;
		exit(EXIT_FAILURE);
	}

	cout << left << setw(10) << "Account" << setw(13)
		<< "Name" << "Balance\n" << fixed << showpoint;

	int account; // the account number
	string name; // the account owner's name
	double balance; // the account balance

			// display each record in file
	while (inClientFile >> account >> name >> balance) {
		outputLine(account, name, balance);
	}
	system("pause");

}

// displace a ssingle record from file
void outputLine(int account, const string& name, double balance) {
	cout << left << setw(10) << account << setw(13) << name 
		<< setw(7) << setprecision(2) << right << balance << endl;
}