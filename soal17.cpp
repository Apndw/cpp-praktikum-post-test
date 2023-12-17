#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string jenisIkan[15];
  int index, total, ikan[15][2];

  cout << "Masukan jumlah ikan yang akan di catat (maks 15) : ";
  cin >> total;

  if (total > 15) {
    cout << "Total harus kurang dari 15" << endl;
    return 0;
  }

  for (index = 0; index < total; index++) {
    cout << "Masukan tipe ikan : ";
    cin >> jenisIkan[index];

    cout << "Masukan jumlah ikan : ";
    cin >> ikan[index][0];    

    cout << "Masukan harga ikan : ";
    cin >> ikan[index][1];
  }

  for (index = 0; index < total; index++) {
    cout << "Jenis ikan " << jenisIkan[index] << " dengan jumlah " << ikan[index][0] << " berharga " << ikan[index][1] << endl;
  }

  return 0;
}