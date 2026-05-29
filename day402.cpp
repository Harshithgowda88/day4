#include<iostream>
using namespace std;
int main()
{
    int a , b , choice;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;
    if (b==0)
    {
        cout << "Division By Zero is Not Possible" << endl;
    }
    return 0;
    cout << "1. Addition" << endl;
    cout << "2. Substraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Select the choice : ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "The Addition of two number is : " << a+b << endl;

    }

    else if (choice == 2)
    {
        cout << "The Substraction of two number is : " << a-b << endl;
    }
    else if (choice == 3)
    {
        cout << "The Multiplication of two number is : " << a*b << endl;

    }
    else if (choice == 4)
    {
        cout << "The Division of two number is : " << a%b << endl;

    }
    else
    {
        cout << "Invalid Choice!!!" << endl;
    }
    
}   