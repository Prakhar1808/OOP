#include <iostream>
using namespace std;

class Complex {
  int real, imag;

public:
  Complex() {
    real = 0;
    imag = 0;
  }
  Complex(int x) {
    real = x;
    imag = x;
  }
  Complex(int r, int i) {
    real = r;
    imag = i;
  }

  Complex add(Complex c) {
    Complex temp;

    temp.real = real + c.real;
    temp.imag = imag + c.imag;

    return temp;
  }

  void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
  Complex c1;
  Complex c2(5);
  Complex c3(10, 20);

  cout << "First Complex Number: ";
  c2.display();

  cout << "Second Complex Number: ";
  c3.display();
  Complex result = c2.add(c3);
  cout << "Addition: ";
  result.display();

  return 0;
}
