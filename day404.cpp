#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];

    // User enters number of elements
    cout << "Enter how many elements you want: ";
    cin >> n;

    // Taking array elements
    cout << "Enter the elements:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Finding middle element
    int middle = n / 2;

    cout << "Middle element = " << arr[middle];

    return 0;
}