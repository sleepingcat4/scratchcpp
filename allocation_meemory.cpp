// The unary operator new allocates memory in bytes during the run time from the free store.

#include <iostream>
using namespace std;

int main() {
  // Reserve 4 bytes in free store
  new int;
  return 0;
}