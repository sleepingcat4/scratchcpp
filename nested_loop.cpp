#include <iostream>

using namespace std;

int main() {
  // Declares variable inner and outer
  int inner, outer;
  // Outer for loop
  for (outer = 6; outer <= 8; outer++) {
    // Outer for loop body
    cout << "Table of " << outer << " is:" << endl;
    // Inner for loop
    for (inner = 1; inner <= 5; inner++) {
      // Inner for loop body
      cout << outer << " * " << inner << " = " << (outer * inner) << endl;
    }
    // Exit inner for loop
  }
  // Exit outer for loop
  return 0;
}