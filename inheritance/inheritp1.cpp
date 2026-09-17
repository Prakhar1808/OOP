#include <iostream>
using namespace std;

class Person{
    private:
        int age = 19;
        string name = "Prakhar";
    public:
        void showdata(){
            cout << "age: " << age << " name: " << name << endl;
        }
        void putpersoninfo(){
            cout << "enter your name: ";
            cin >> name;

            cout << "enter your age: ";
            cin >> age;
        }
};

class student : public Person{
    private:
        int enrollment;
        float marks;

    public:
        void putstudentinfo(){
            cout << "enter enrollment no.: ";
            cin >> enrollment;

            cout << "enter marks: ";
            cin >> marks;

        }

        void studentdata(){
            cout << "enrollment no.: " << enrollment << " marks: " << marks << endl;
        }
};

int main(){
    student s1;
    s1.putpersoninfo();
    s1.putstudentinfo();

    cout << "---------------------------------" << endl;
    s1.showdata();
    s1.studentdata();
}
