#include <iostream>
using namespace std; 

void rearrangePosNeg(int arr[], int n) {
    int positiveIndex = 0;

    // Move all positive numbers to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            if (i != positiveIndex) {
                // Swap positive number to the front
                int temp = arr[i];
                arr[i] = arr[positiveIndex];
                arr[positiveIndex] = temp;
            }
            positiveIndex++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rearrangePosNeg(arr, n);

    cout << "Array after rearranging positive and negative numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
