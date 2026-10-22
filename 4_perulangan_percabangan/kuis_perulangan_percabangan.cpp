#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
      if (j % 2 == 0) {
        cout << "*" << "\n";
        break;
      }
    }
  }

  cout << "\n";

  int n = 47;
  while (true) {
    if (n == 0) {
      break;
    }
    cout << "*" << "\n";
    n /= 10;
  }

  return 0;
}
