#include <iostream>
#include <string>
using namespace std;

int main() {
//Using ERASE function
    string s1("My name is Burrito and I love Hot Cheetos!");
    cout << s1 << endl;

    s1.erase(18);
    cout << s1 << endl;

//Using REPLACE function
    s1.replace(11, 7, "Tacos");

    //REPLACE takes three parameters:
    //first parameter goes to the location of the string
    //second parameter indicates how many characters will be removed
    //Third parameter is a string that will replace whatever was removed.

    cout << s1 << endl;

//Using INSERT function
    s1.insert(16, " and I love devouring Oreos!");
    cout << s1 << endl;

return 0;
}