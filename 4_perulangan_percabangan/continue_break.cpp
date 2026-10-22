#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) {
    cout << "awal iterasi " << i << "\n";

    // ilustrasi perintah continue
    if (i % 2 == 0) {
      cout << "  iterasi dihentikan!" << "\n";

      continue;
    }

    cout << "  hallo dunia" << "\n";

    // ilustrasi perintah break
    if (i % 5 == 0) {
      cout << "  perulangan dihentikan!" << "\n";
      break;
    }

    cout << "akhir iterasi" << "\n";
  }
  cout << "akhir perulangan" << "\n";

  return 0;
}
