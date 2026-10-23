#include <iostream>
using namespace std;

int main() {
  bool lampu[101];

  // pada awalnya, seluruh lampu dalam kondisi mati.
  for (int i = 1; i <= 100; i++) {
    lampu[i] = false;
  }

  // untuk setiap jam (pukul p),
  for (int p = 1; p <= 10; p++) {
    for (int i = 1; i <= 100; i++) {
      if (i % p == 0) {
        // tekan saklar lampu
        lampu[i] = !lampu[i];
      }
    }
  }
  int banyak_lampu_menyala = 0;

  for (int j = 1; j <= 100; j++) {
    if (lampu[j] == true) {
      banyak_lampu_menyala++;
    }
  }

  cout << banyak_lampu_menyala << "\n";

  return 0;
}
