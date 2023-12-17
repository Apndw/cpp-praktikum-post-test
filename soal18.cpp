#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int menu;

  cout << "Indikator menu" << endl;
  cout << "1. membaca pesan dan membalas" << endl;
  cout << "2. membaca pesan tanpa dibalas" << endl;
  cout << "3. tidak membaca dan tidak dibalas" << endl;
  cout << "4. di blokir" << endl;
  cout << "-----------------------------------------" << endl;

  cout << "Masukan pilihan mu : ";
  cin >> menu;

  switch (menu) {
    case 1:
      cout << "Peluang mu 80%" << endl;
      cout << "Tinggal cari tanggal jadian nich" << endl;
      break;
    case 2:
      cout << "Peluang mu 45%" << endl;
      cout << "Lu bukan prioritas dia bro" << endl;
      break;
    case 3:
      cout << "Peluang mu 10%" << endl;
      cout << "Semangat ya bro sepertinya anda NT" << endl;
      break;
    case 4:
      cout << "Peluang mu 1%" << endl;
      cout << "Move on bro" << endl;
      break;
    default:
      cout << "Menu tidak ditemukan" << endl; 
      break;
  }

  return 0;
}