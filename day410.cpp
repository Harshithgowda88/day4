#include<iostream>
using namespace std;

class Student {

public:

    int id;
    string name;

    // Create / Insert
    void insert(int i, string n) {
        id = i;
        name = n;
    }

    // Read / Display
    void display() {
        cout << "ID   : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "------------------" << endl;
    }
};

int main() {

    Student s[100];
    int n, choice, id;
    string name;
    int count = 0;

    while(true) {

        cout << "\n===== CRUD MENU =====" << endl;
        cout << "1. Create Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Update Student" << endl;
        cout << "4. Delete Student" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        // CREATE
        if(choice == 1) {

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter Name: ";
            cin >> name;

            s[count].insert(id, name);
            count++;

            cout << "Student Added Successfully!" << endl;
        }

        // READ
        else if(choice == 2) {

            if(count == 0) {
                cout << "No records found!" << endl;
            }
            else {
                for(int i = 0; i < count; i++) {
                    s[i].display();
                }
            }
        }

        // UPDATE
        else if(choice == 3) {

            cout << "Enter ID to update: ";
            cin >> id;

            bool found = false;

            for(int i = 0; i < count; i++) {

                if(s[i].id == id) {

                    cout << "Enter new name: ";
                    cin >> name;

                    s[i].name = name;

                    cout << "Record Updated Successfully!" << endl;
                    found = true;
                    break;
                }
            }

            if(!found) {
                cout << "Student not found!" << endl;
            }
        }

        // DELETE
        else if(choice == 4) {

            cout << "Enter ID to delete: ";
            cin >> id;

            bool found = false;

            for(int i = 0; i < count; i++) {

                if(s[i].id == id) {

                    for(int j = i; j < count - 1; j++) {
                        s[j] = s[j + 1];
                    }

                    count--;

                    cout << "Record Deleted Successfully!" << endl;
                    found = true;
                    break;
                }
            }

            if(!found) {
                cout << "Student not found!" << endl;
            }
        }

        // EXIT
        else if(choice == 5) {
            cout << "Exiting Program..." << endl;
            break;
        }

        else {
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}