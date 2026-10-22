#include <iostream>
#include <memory>
using namespace std;

int main() {
  int jantan, betina;

  // banyak bebek pak dengklek saat ini
  jantan = 63;
  betina = 192;

  // bulan pertama
  betina = betina + jantan;
  jantan = jantan - (jantan / 3);

  // bulan kedua
  jantan = jantan + betina;
  betina = betina - 10;

  // total bebek
  cout << "Total Bebek Pak Dengklek Adalah: " << jantan + betina << "\n";

  return 0;
}
