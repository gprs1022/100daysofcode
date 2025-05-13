#include<iostream>
using namespace std;

void insertElement(int arr[], int n, int pos, int value) {
    // Shift elements to the right to make space for the new value
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new value at the specified position
    arr[pos] = value;
    // Increment the size of the array
    n++;
}

int main() {
    int arr[10]; // Array with a maximum size of 10
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n >= 10) {
        cout << "Array size exceeds the maximum limit of 10!" << endl;
        return 1;
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter the position (0-based index): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    int value;
    cout << "Enter the value: ";
    cin >> value;

    insertElement(arr, n, pos, value);

    cout << "The new array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}