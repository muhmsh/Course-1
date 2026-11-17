/*
  Operators & Operands
  "Symbols To operate On Data"

  - Operators precedence
  "Which One Has Higher Precedence"

  Refernce
  --- Operators Precedence Tabls

  Search
  - Bitwise Operators
  - Spaceship Operator

  Training
  - try Operators yourself Before Browsing References
  */

#include <iostream>
using namespace std;
int main() {

  cout << 10 + 5 * 5 << "\n";
  // 5 * 5 = 25
  // 10 + 25 = 35
  cout << 10 - 5 * 5 << "\n";
  // 5 * 5 = 25
  // 10 -25 = -15
  cout << 20 / 5 * 4 << "\n";
  // 20 / 5 = 4
  // 4 * 4 = 16
  cout << 10 + 20 / 5 * 4 << "\n";
  // 10 + 16 = 26
  // 20 / 5 = 4
  // 4 * 4 = 16
  cout << (10 + 5) * 5 << "\n"; // (15) * 5 = 75
  return 0;
}
