#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int usia;

  cout << "Masukkan usia: ";
  cin >> usia;

  if (usia > 0 && usia < 18) cout << "Dibawah umur" << endl;
  else if (usia > 18 && usia <= 60) cout << "Dewasa" << endl;
  else if (usia > 60) cout << "Senior" << endl;
  else cout << "Salah input" << endl;

  return 0;
}