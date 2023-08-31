#include <iostream>

using namespace std;

int main() {
  // Initialize variable money 
  int money = 10;
  // Declare variable result
  string result;
  // Ternary operator
  result = (money >= 20) ?  "You can gift a watch" : "You can gift a pen " ;
  // prints result
  cout << result;
  return 0;
}