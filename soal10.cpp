#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
  int sisi;
  double hasil;

  cout << "Masukan panjang sisi : ";
  cin >> sisi;

  hasil = sisi * sisi;

  cout << "Luas persegi = " << fixed << setprecision(2) << hasil << endl;

  return 0;
}