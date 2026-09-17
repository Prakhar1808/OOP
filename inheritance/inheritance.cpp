#include <iostream>
using namespace std;

class Animal {
public:
  void walk() { cout << "The Animal is walking now"; }

  void eat() { cout << "The Animal is eating now"; }
};

class Dog : public Animal { // inheriting here
public:
  void bark() { cout << "Woof"; }
};

int main() {
  Dog d;

  d.eat();
  d.bark();
  return 0;
}
