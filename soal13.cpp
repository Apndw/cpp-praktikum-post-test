#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fungsi_kuadrat(int x, int y) {
  y--;
  int hasil = x;

  for (int i = 0; i < y; i++) {
    hasil = hasil * x;
  }

  return hasil;
}

int main() {
  int x, y;

  cout << "Masukan x : ";
  cin >> x;

  cout << "Masukan y : ";
  cin >> y;

  cout << "Hasil dari pangkat x dan y adalah " << fungsi_kuadrat(x,y) << endl;

  return 0;
}