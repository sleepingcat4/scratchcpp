#include <iostream>

using namespace std;

int ticket_price(int person) {
  int price;
  if (person == 1) {
    price = 100;
    return price;
  } 
  else
    person--;
  return ticket_price(person);
}

int main() {
  int price;
  price = ticket_price(5);
  cout << "Ticket price = " << price << endl;

}

// The condition where the function stops calling itself in its body is known as the base case.
// Every recursive function must have a base case or an error is generated because of memory overflow.