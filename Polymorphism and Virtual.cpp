#include <iostream>
using namespace std;

class Shape {
protected:
	int width, height;

public:
	Shape(int a = 0, int b = 0) {
		width = a;
		height = b;
	}
	/*   virtual int area() {
		 cout << "Parent class area :" <<endl;
		 return 0;
	  } */

	// pure virtual function
	virtual int area() = 0;

	/*The = 0 tells the compiler that the function has no body and above virtual
	 * function will be called pure virtual function. As a result, in order for the program to work, each class that calls this function must include an 'area' function that overwrites this pure virtual function. Also, having a pure virtual function makes the class an abstract class.*/
	 
};
class Rectangle : public Shape {
public:
	Rectangle(int a = 0, int b = 0) : Shape(a, b) {
	}

	int area() {
		cout << "Rectangle class area:" << endl;
		return (width * height);
	}
};

class Triangle : public Shape {
public:
	Triangle(int a = 0, int b = 0) : Shape(a, b) {
	}

	int area() {
		cout << "Triangle class area:" << endl;
		return (width * height / 2);
	}
};

// Main function for the program
int main() {
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);

	// store the address of Rectangle
	shape = &rec;

	// call rectangle area.
	shape->area();

	// store the address of Triangle
	shape = &tri;

	// call triangle area.
	shape->area();

	return 0;
}