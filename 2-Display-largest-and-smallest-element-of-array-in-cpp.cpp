#include <iostream>
using namespace std;
int main() {
  int arr[1000], n, largest, smallest;

  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];//jikku
  }

  largest = arr[0];
  smallest = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }

    if (arr[i] < smallest) {
      smallest = arr[i];
    }
  }

  cout << "Largest element: " << largest << endl;
  cout << "Smallest element: " << smallest << endl;

  return 0;
  //Alraaafi
}