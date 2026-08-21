#include <iostream>
using namespace std;

void test(int &x, int y){ // formal parameter
    x += 5;
    y *= 2;
    cout << x << y << endl;
}

int main(){
    int a = 3, b = 4; // called "actual / local parameters"
    test(a, b);
    cout << a << b; // this will print changes made in the function for only x
}
