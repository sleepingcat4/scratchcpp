#include <iostream>

using namespace std;

int main() {
  // Initialize variable money
  int money = 6;
  switch (money) {
    // first case
  case 20 ... 100:
    cout << "You can gift a watch" << endl;
    break; 
    // compares value of case label from 10 to 19 with the value of money
  case 10 ... 19:
    cout << "You can gift a comic book " << endl;
    break;
    // compares value of case label from 9 to 5 with the value of money
  case 5 ... 9:
    cout << "You can gift a chocolate " << endl;
    break;
    // default case
  default:
    cout << "You can gift a pen " << endl;
  }
  return 0;
}