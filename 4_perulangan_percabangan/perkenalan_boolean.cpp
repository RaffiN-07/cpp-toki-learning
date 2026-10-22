#include <iostream>
using namespace std;

bool var_1, var_2, var_3;

int main() {
  var_1 = true; // true
  var_2 =
      1 + 1 != 2; // false, karena tidak sama dengan 2 padahal sama dengan dua
  var_3 = false;

  cout << var_1 << "\n";
  cout << var_2 << "\n";
  cout << var_3 << "\n";

  int x = 3;
  var_3 = x > 0;

  cout << "\n";
  // negasi (not) di c++ menggunakan !paramater

  cout << !var_3 << "\n"; // false
  cout << !var_2 << "\n"; // true
  cout << !var_1 << "\n"; // false

  return 0;
}
