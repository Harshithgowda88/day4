#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "How many numbers do you want to enter? " << endl;
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " numbers:" << endl;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume first element is min and max
    int max = arr[0];
    int min = arr[0];
    int sum = 0;

    // Finding min, max and sum
    for(int i = 0; i < n; i++) {

        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }

        sum = sum + arr[i];
    }

    double average = (double)sum / n;

    // Finding repeated numbers
    int repeatedCount = 0;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
                repeatedCount++;
                break;
            }
        }
    }

    // Output
    cout << "\nMaximum Number = " << max << endl;
    cout << "Minimum Number = " << min << endl;
    cout << "Average = " << average << endl;
    cout << "Repeated Numbers = " << repeatedCount << endl;

    return 0;
}