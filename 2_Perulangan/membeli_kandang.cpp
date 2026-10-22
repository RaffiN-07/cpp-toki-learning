#include <iostream>
using namespace std;

int berapa_kali;

int main() {
  int luas_kandang = 12;
  cout << "Masukkan Berapa kali anda ingin menambahkan luas kandang: ";
  cin >> berapa_kali;
  cout << "\n";

  while (berapa_kali > 0) {
    luas_kandang += 7;
    cout << "Luas kandang + 7 sekarang: " << luas_kandang << " meter persegi"
         << "\n";
    berapa_kali -= 1;
    cout << "sekarang adalah perulangan ke - " << berapa_kali << "\n";
    cout << "\n";
  }
  return 0;
}
