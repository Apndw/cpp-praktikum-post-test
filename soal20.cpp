#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int lot, saham;
  float total, tax = 0.08;

  cout << "Masukan jumlah lot : ";
  cin >> lot;

  if (lot < 1) {
    cout << "Jumlah lot tidak boleh kurang dari 1" << endl;
    return 0;
  }

  cout << "Masukan harga saham : ";
  cin >> saham;

  total = lot * saham * tax;

  cout << "Biaya broker yang harus dibayar sebesar : " << total << endl;

  return 0;
}