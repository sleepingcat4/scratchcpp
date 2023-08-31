#include <iostream>

using namespace std;

int main() {
  // Initialize variable money
  int money = 6;
  // if block
  if (money >= 20) {
    cout << "You can gift a watch" << endl;
  }
  // else-if block
  else if (money >= 10) {
    cout << "You can gift a comic book " << endl;
  } 
  else if (money >= 5) {
    cout << "You can gift a chocolate " << endl;
  }
  // else block
  else {
    cout << "You can gift a pen " << endl;
  }
  return 0;
}