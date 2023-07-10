//prefix Sum
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

 
  // Create the prefix sum array
  int pref = 0;
  for (int i = 0; i < n; i++) {
    pref =pref+arr[i];
    arr[i] = pref;
  }

  // Print the prefix sum array
  cout << "Prefix Sum Array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
