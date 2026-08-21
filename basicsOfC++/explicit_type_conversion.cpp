#include <iostream>
using namespace std;

int main() {
  double x = 1.2;

  // explicit coversion from double to int
  int sum = static_cast<int>(x + 1); // from 2.2, ".2" will be truncated

  cout << sum;
  return 0;
}
