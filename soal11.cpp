#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int nilai;

  cout << "Masukan sebuah bilangan bulat: ";
  cin >> nilai;

  if (nilai % 2 == 0) cout << "Nilai yang anda masukan " << nilai << "adalah bilangan positif" << endl;
  else cout << "Nilai yang anda masukan " << nilai << "adalah bilangan negatif" << endl;

  return 0;
}