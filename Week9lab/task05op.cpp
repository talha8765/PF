#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int n);
main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int uniqueCount = 0; // Count for unique numbers

    cout << "Enter " << n << " numbers, one per line:"<<endl;
    for (int i = 0; i < n; i++) {
        int inputNumber;
        cin >> inputNumber;

        if (!isAlreadyEntered(arr, uniqueCount, inputNumber))
        {
            arr[uniqueCount++] = inputNumber; 
        } 
        else
        {
            cout << "Already Entered: " << inputNumber << endl;
            i; 
        }
    }
    cout<<"Unique numbers entered: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
bool isAlreadyEntered(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return true;
        }
    }
    return false;
}
