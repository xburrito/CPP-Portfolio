#include <iostream>
using namespace std;


class ccnyGroup {
public:
  ccnyGroup(string z){
    	void setName(string x) {
		name = x;
	}
  }

	string getName() {
		return name;
	}

private:
	string name;
};


int main() 

{
	ccnyGroup litt;

	litt.setName("Daniel Gaston");
	litt.setName("Shirley Chan");

	cout << litt.getName() << endl;
  cout << litt.getName();
	return 0;
}


