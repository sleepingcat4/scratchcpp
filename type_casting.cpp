// Type-casting is a way to convert the value of one data type to another data type.
// In implicit casting, the compiler automatically converts one data type to another.

// In explicit casting, the programmer converts the data type of an object to required data type.

#include <iostream>

using namespace std;

int main() {
  // Initializes a variable of char data type
  char character = 'A';
  // Declares a variable of int type
  int ASCII;
  // Converts char data type into int explicitly
  ASCII = (int) character;
  // Prints value of variable
  cout << "ASCII value = " << ASCII;

}