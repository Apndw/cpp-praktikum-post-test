#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string nama;
  string list[] = {"Ana", "Ani", "Budi", "Yunan"};

  cout << "Masukan nama kamu: ";
  cin >> nama;

  for (string data: list) {
    if (nama == data) cout << "Nama ditemukan" << endl;
  }

  return 0;
}