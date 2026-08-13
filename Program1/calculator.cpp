#include <iostream>
using namespace std;

class Calculator
{
    private:
        int num1, num2;
    public:
        void setValues(int a, int b)
        {
            num1 = a;
            num2 = b;
        }
    void sum(){
        cout << "Adding: \n";
        cout << "Sum = " << num1 + num2 << endl;
    }
    void subtract(){
        cout << "Subtracting: \n";
        cout << "Difference = " << num1 - num2 << endl;
    }
    void multiplication(){
        cout << "Multiplying: \n";
        cout << "Product = " << num1 * num2 << endl;
    }
    void division(){
        cout << "Dividing: \n";
        cout << "Division = " << num1 / num2 << endl;
    }
};

int main(){
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int choice;
    cout << "Enter Choice \n 1) Addition 2) Subtraction 3) Multiplication 4) Divison\n";
    cin >> choice;

    Calculator c;
    c.setValues(a, b);
    if (choice == 1){
        c.sum();
    }
    else if (choice == 2){
        c.subtract();
    }
    else if (choice == 3){
        c.multiplication();
    }
    else if (choice == 4){
        c.division();
    }
    return 0;
}
