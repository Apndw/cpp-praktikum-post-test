#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  char command[50];
  int index, x = 0, y = 0;

  cout << "Masukan perintah : ";
  cin >> command;

  int length = sizeof(command) / sizeof(*command);

  for (index = 0; index < length; index++) {
    command[index] = tolower(command[index]);

    if (command[index] == 'r') x++;
    else if (command[index] == 'l') x--;
    else if (command[index] == 'u') y++;
    else if (command[index] == 'd') y--;
  }

  cout << "Posisi kapal ada di koordinat (" << x << "," << y << ")" << endl;

  return 0;
}