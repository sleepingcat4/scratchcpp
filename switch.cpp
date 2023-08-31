/*


We can use the else-if statement here, but choice is extensive. Here, the switch statement comes in. Whenever we have to check the value of a single variable against an extensive number of choices, it is better to use the switch statement.



*/

#include <iostream>

using namespace std;

int main() {
  // Initialize variable grade
  char grade = 'C';
  // switch statement
  switch (grade) {
    // first case 
    case 'A':
      cout << "Exceptional performance!";
      break;
    // second case  
    case 'B':
      cout << "Well done!";
      break;
    // third case    
    case 'C':
      cout << "Good!";
      break;
    // fourth case    
    case 'D':
      cout << "You need to do more hardwork!";
      break; 
    // fifth case    
    case 'F':
      cout << "Fail";
      break; 
    // default case    
    default:
      cout << "Invalid input";
  }

  return 0;
}