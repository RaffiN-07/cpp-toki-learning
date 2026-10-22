#include <iostream>
using namespace std;

int main() {
  int luas_1 = 225 * 335;
  int luas_2 = 215 * 394;
  int luas_3 = 198 * 400;
  int luas_4 = 314 * 298;
  int luas_5 = 299 * 278;

  int hasil = 0;

  if (luas_1 >= 80000) {
    hasil++;
  }
  if (luas_2 >= 80000) {
    hasil++;
  }
  if (luas_3 >= 80000) {
    hasil++;
  }
  if (luas_4 >= 80000) {
    hasil++;
  }
  if (luas_5 >= 80000) {
    hasil++;
  }

  cout << hasil << "\n";

  return 0;
}
