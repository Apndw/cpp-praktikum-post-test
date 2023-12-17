#include <iostream>

using std::cout;
using std::endl;

int main() {
  for (int i = 8; i > 0; i--) {
    if (i % 2 == 0) continue;

    for (int j = 8 - i; j > 0; j--) {
      cout << " ";
    }

    for (int y = i; y > 0; y--) {
      cout << "* ";
    }

    cout << endl;
  }

  for (int i = 0; i < 8; i++) {
    if (i == 1 || i % 2 == 0) continue;

    for (int j = 0; j < 8 - i; j++) {
      cout << " ";
    }

    for (int y = 0; y < i; y++) {
      cout << "* ";
    }

    cout << endl;
  }

  return 0;
}