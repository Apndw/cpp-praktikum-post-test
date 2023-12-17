#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int index, data[2][5];

  cout << "Masukan element pada array pertama" << endl;

  for (index = 0; index < 5; index++) {
    cout << "Element ke -" << index + 1 << " : ";
    cin >> data[0][index];
  }

  cout << "Masukan element pada array kedua" << endl;

  for (index = 0; index < 5; index++) {
    cout << "Element ke -" << index + 1 << " : ";
    cin >> data[1][index];
  }

  cout << "Hasil array pertama dan kedua setelah di gabung" << endl;

  for (index = 0; index < 2; index++) {
    for (int x = 0; x < 5; x++) {
      cout << data[index][x] << " ";
    }
  }

  return 0;
}