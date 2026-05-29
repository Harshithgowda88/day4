#include<iostream>
using namespace std;

// Class creation
class CityEngineeringCollege {

public:
    
    // Data members
    string myName;
    string friendName;

    // Function to display names
    void display() {

        cout << "My Name      : " << myName << endl;
        cout << "Friend Name  : " << friendName << endl;
    }
};

int main() {

    // Object creation
    CityEngineeringCollege obj;

    // Assigning values
    obj.myName = "Harshith";
    obj.friendName = "Rahul";

    // Calling function
    obj.display();

    return 0;
}

