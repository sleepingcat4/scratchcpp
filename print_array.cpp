#include <iostream>

using namespace std;

int main() {

  int size = 5;
  //Initialize array
  int Roll_Number[] = {100, 101, 102, 103, 104};

  //Print Array 
  for (int i = 0; i < size; i++) {
    // Access element at index i
    cout << Roll_Number[i] << " ";
  }
  cout << endl;
}