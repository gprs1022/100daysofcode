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
 
  for (int i = 0; i < n; i+2) {
       cout<<arr[i];
  }

  

  return 0;
}
