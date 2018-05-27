#include <iostream>

using namespace std;

// Declare a class and define function inside the class
class BurritoClass{
    public: // You can use the function outside of the class.
        void opinion(){
            cout << "Good stuff YUMMY!" << endl;
        }

};

int main()
{
    BurritoClass SpicyBurrito; // Create an object from BurritoClass
    SpicyBurrito.opinion();
    return 0;
}

// The object "SpicyBurrito" is considered the key to accessing coolSayings withing the BurritoClass. 