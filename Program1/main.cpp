#include <iostream>
using namespace std;

class Number {
public:
  int Num1, Num2;
  void getinput() {
    cout << "Enter first no: ";
    cin >> Num1;
    cout << "Enter second no: ";
    cin >> Num2;
  }
  void show() {
    cout << "___________________________________\n";
    cout << "Number is: " << Num1 << "\n";
    cout << "2nd Number is: " << Num2 << "\n";
  }
};

int main() {
  Number N;
  N.getinput();
  N.show();
  return 0;
}
