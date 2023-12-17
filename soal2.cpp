#include <conio.h>
#include <iostream>

using std::cout;
using std::endl;

int main() {
  char name;
  cout << "Enter your name: ";
  name = getche();
  cout << endl;

  char password;
  cout << "Enter your password: ";
  password = getch();
  cout << endl;

  cout <<"name: " << name << endl;
  cout <<"password: " << password << endl;

  return 0;
}