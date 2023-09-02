#include <iostream>
using namespace std;

int main() {
  // Declare pointer ptr
  int * ptr = nullptr;
  // Store the starting address of dynamically reserved 4 bytes in ptr
  ptr = new int;
  // Store 100 in dynamic space
  *ptr = 100;
  // Print value pointed by ptr
  cout << *ptr;
  // Free the space pointed by pointer ptr
  delete ptr;
  return 0;
}

//  It’s good practice to set the pointer to nullptr after deallocation, unless you are pointing to some other valid target.
// he delete operator allows us to free the dynamically allocated space.