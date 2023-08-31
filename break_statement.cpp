// The break statement terminates the loop and transfers control to the very next statement after the loop body.


#include <iostream>

using namespace std;

int main() {
  // Initialize variable icecream
  int icecream;
  // for loop start
  for (icecream = 5; icecream > 0; icecream--) {
    // loop body
    cout << "Number of free ice-creams = " << icecream << endl;
    // break statement
    if (icecream == 2) {
      break;
    }
    cout << "Buy an icecream" << endl;
  }
  // Exit loop
  cout << "Sorry! We ran out of ice-cream" << endl;
  return 0;
}