// Formal parameters are the variables defined in the function definition. These variables receive values from the calling function. Formal parameters are commonly known as parameters.
// Actual parameters are the variables or values passed to the function when it is called. These variables supply value to the called function. Actual parameters are commonly known as arguments.
#include <iostream>
using namespace std;

// Function definition
int make_juice ( int water , int fruit){
// Define new  variable juice of int type
  int juice ;
// Adds water in apple and saves the output in juice
  juice = water + fruit;
// Prints text on the screen  
  cout << "Your juice is ready" << endl ;
 // Returns juice value in output 
  return juice;

}


int main() {
  // Declares a variable juice_glass
  int juice_glass; 
  // Calls function make_juice and save its output in juice_glass
  juice_glass = make_juice ( 2 , 5);
  // Prints value of juice_glass
  cout << "Number of juice glass = " << juice_glass << endl;  
  return 0;
}
