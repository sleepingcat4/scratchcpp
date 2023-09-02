// A computer’s memory can be thought of as an array of bytes.
// we will use the address-of operator & before the identifier to access the address of the variable.
// The address-of operator (&) is a unary operator. It is used to extract the memory address of the variable.

#include <iostream>

using namespace std;

int main() {
  // Declare a variable John
  int John = 10;
  // Prints the memory address in which value of John is stored
  cout << "John Address = " << &John << endl;
  // Prints the value of John
  cout << "John Value = " << John << endl;
  return 0;
}