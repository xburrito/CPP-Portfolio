#include <iostream>

using namespace std;

// This function takes two parameters.
int addNumbers(int x, int y){
    int answer = x + y;
    return answer;
}

int main()
{
    cout << addNumbers(43, 86); // Call the function.

    return 0;
}

// NOTE: Values passed into parameters must be of the same variable types. You cannot pass string values into integer variable type parameters. Else you will get compiler errors.