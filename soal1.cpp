#include <iomanip>
#include <iostream>

using std::hex;
using std::oct;
using std::cout;
using std::endl;

int main() {
  int nilai = 12;

  cout << hex << nilai << endl;
  cout << oct << nilai << endl;

  return 0;
}