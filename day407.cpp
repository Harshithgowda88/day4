#include<iostream>
using namespace std;

class Student {

public:

    string name;
    int age;

    // 1. Default Constructor
    Student() {
        name = "Default Name";
        age = 0;
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "\nName: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main() {

    // Default constructor
    Student s1;
    s1.display();

    // Parameterized constructor
    Student s2("Harshith", 20);
    s2.display();

    // Copy constructor
    Student s3 = s2;
    s3.display();

    return 0;
}