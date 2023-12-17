#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int suhu;

  cout << "Masukan besar suhu : ";
  cin >> suhu;

  if (suhu <= 0) cout << "Pada suhu " << suhu << " derajat celcius, air akan berwujud es";
  else if (suhu > 0 && suhu <= 90) cout << "Pada suhu " << suhu << " derajat celcius, air akan berwujud air";
  else cout << "Pada suhu " << suhu << " derajat celcius, air akan berwujud gasa";

  return 0;
}