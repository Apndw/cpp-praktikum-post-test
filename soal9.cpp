#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  char karakter;

  cout << "Masukan sebuah karakter : ";
  karakter = getch();

  cout << "\nKarakter yang sudah di inputkan adalah : " << karakter << endl;

  return 0;
}