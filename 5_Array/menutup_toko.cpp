#include <iostream>
using namespace std;

int main() {
  int luas[4][3] = {{225 * 335, 299 * 278, 300 * 250},
                    {215 * 394, 144 * 718, 300 * 290},
                    {200 * 400, 240 * 333, 142 * 619},
                    {314 * 298, 411 * 198, 333 * 222}};

  int harga_jual[3] = {100, 120, 150};

  int total_merk_1 = 0;
  int total_merk_2 = 0;
  int total_merk_3 = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      int hasil = luas[i][j] * harga_jual[j];

      if (j == 0) {
        total_merk_1 += hasil;
      } else if (j == 1) {
        total_merk_2 += hasil;
      } else {
        total_merk_3 += hasil;
      }
    }
  }

  cout << total_merk_1 << "\n";
  cout << total_merk_2 << "\n";
  cout << total_merk_3 << "\n";

  return 0;
}
