#include <iostream>
using namespace std;

int main() {
	try {
		int storage = 100;
		int file_size = 1000;
		if (file_size > storage){
			throw 666;
		}
  } 
  catch (int x) {
		cout << "Error #" << x
		      << ": File size is over storage capacity!";
	}
	return 0;
}