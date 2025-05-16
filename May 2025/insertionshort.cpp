#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) { 
        
        int temp;
        temp =arr[i];
         int  j=i-1;

        while(j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    insertion_sort(arr, n);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
