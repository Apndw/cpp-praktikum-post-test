#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int index, nim[3];
  string nama[3];

  for (index = 0; index < 3; index++) {
    cout << "Masukan nama: "; cin >> nama[index];
    cout << "Masukan nim: "; cin >> nim[index];
  }

  for (index = 0; index < 3; index++) {
    cout << "\nNama: " << nama[index] << "; NIM: " << nim[index];
  }

  return 0;
}