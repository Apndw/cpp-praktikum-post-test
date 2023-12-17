#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int angka = 2;
  cout << "Masukkan angka: ";
  cin >> angka;
  
  if (angka % 2 == 0) {
    cout << "angka adalah genap";
  } else if (angka % 2 == 1) {
    cout << "angka adalah ganjil";
  }

  return 0;
}