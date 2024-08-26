#include <iostream>
using namespace std;

int main() {
    // 1. question:
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Sum of the array: " << sum << endl;
 // question 2:
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    // question 3:
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int countOdd = 0, countEven = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }
    cout << "Number of odd numbers: " << countOdd << endl;
    cout << "Number of even numbers: " << countEven << endl;
    return 0;
}
