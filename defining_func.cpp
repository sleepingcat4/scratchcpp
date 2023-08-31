#include <iostream>

using namespace std;
// Function declaration
int make_juice(int water, int fruit);

int main() {

  return 0;

}

// Function definition
int make_juice(int water, int fruit) {
  // Define new  variable juice of int type
  int juice;
  // Adds water in apple and save output in juice
  juice = water + fruit;
  // Prints text on the screen  
  cout << "Your juice is ready" << endl;
  // Returns juice value in output 
  return juice;

}