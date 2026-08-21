#include <iostream>
using namespace std;

int main(){
    int i = 10;
    char c = 'a';

    // c is implicitly converted to int
    // a ascii value is 97
    i = i + c;

    // x is implicitly converted to float
    float f = i + 1.0;

}
