#include <iostream>

using std::cout;
using std::endl;

int main() {
  int index, firstChar[] = {1,2,3,4,5,6}, secondChar[] = {7,8,9,10,11,12};

  cout << "{";

  for (index = 0; index < 6; index++) {
    cout << firstChar[index] << ",";
  }

  for (index = 5; index >= 0; index--) {
    if (index != 0) cout << secondChar[index] << ",";
    else cout << secondChar[index] << "}" << endl;
  }

  return 0;
}