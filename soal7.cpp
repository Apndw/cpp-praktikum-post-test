#include <iostream>

using std::cout;
using std::endl;

int main() {
  int sum, index, angka[] = {1,2,3,4,5,6};

  for (index = 0; index < 6; index++) {
    sum += angka[index];
  }

  cout << sum << endl;

  return 0;
}