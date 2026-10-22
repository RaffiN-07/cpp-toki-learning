/*
Soal
Pak Dengklek ingin membuat sebuah kolam berbentuk persegi untuk bebek-bebeknya,
dengan ketentuan berikut:

- Luas kolamnya antara 100.000 sampai dengan 200.000 cm persegi.
- Luas kolam (dalam cm persegi) adalah bilangan genap.
- Luas kolam (dalam cm persegi) adalah bilangan kuadrat sempurna.

Berapakah luas kolam terkecil yang memenuhi seluruh syarat tersebut? Lengkapilah
program di sebelah kanan agar mengeluarkan luas yang diminta.
*/

#include <iostream>
using namespace std;

int main() {
  // jika luas ini bukan bilangan genap,
  // maka iterasi langsung dilewati (continue) ke proses iterasi selanjutnya
  for (int luas = 100000; luas <= 200000; luas++) {
    if (luas % 2 != 0) {
      continue;
    }

    // inisalisiasi kuadrat sempurna
    // dan mengecek apakah luas merupakan kuadrat sempurna
    // (hasil dari perkalian bilangan itu sendiri)

    bool kuadrat_sempurna = false;

    for (int k = 1; k <= luas; k++) {
      // jika luas adalah tepat k * k
      // maka luas ini bilangan kuadrat sempurna
      if ((k * k) == luas) {
        kuadrat_sempurna = true;
      }
    }

    if (kuadrat_sempurna) {
      cout << luas << "\n";

      break;
    }
  }
  return 0;
}
