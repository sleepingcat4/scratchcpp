#include <iostream>
using namespace std;
int main() {
    int number;
    number = 40;

    const int new_number = 30;
    cout << "Your current balance is " << number << endl;

    cout << "Your current balance is " << new_number << endl;
}

// A variable in C++ is given a unique name that is known as an identifier
// In C++, we can use the const keyword to declare a constant.