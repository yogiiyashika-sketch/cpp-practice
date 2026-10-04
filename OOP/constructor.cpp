#include <iostream>
using namespace std;
class Student {
    int age;
    string name;
public:
    // Zero-argument constructor
    Student() {
        age = 18;
        name = "Yashika";
    }
    // Parameterized constructor
    Student(int a, string n) {
        age = a;
        name = n;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    // Calling zero-argument constructor
    Student s1;
    cout << "Zero-Argument Constructor:" << endl;
    s1.display();
    cout << endl;
    // Calling parameterized constructor
    Student s2(20, "Rahul");
    cout << "Parameterized Constructor:" << endl;
    s2.display();
    return 0;
}
