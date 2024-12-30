#include <iostream>
using namespace std;

// Function to calculate the sum of elements in an array recursively
int sum(int a[], int size) {
    if (size == 0) {
        return 0; // Base case: empty array has a sum of 0
    } else {
        return a[size - 1] + sum(a, size - 1); // Recursive case
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int result = sum(arr, 4); // Test the function with an array of size 4
    cout << result << endl; // Should print 10
    return 0;
}
