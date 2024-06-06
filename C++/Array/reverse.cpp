#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Added space for separation between elements
    }
    cout << endl; // Added newline character after printing array
}

void reverse_array(int arr[], int size)
{
    int start = 0; // Start from index 0
    int end = size - 1; // End at last index

    while (start < end) // Loop until start index is less than end index
    {
        swap(arr[start], arr[end]); // Swap elements at start and end indices
        start++;
        end--;
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};

    printarray(arr, 6); // Print original array

    reverse_array(arr, 6); // Reverse the array

    printarray(arr, 6); // Print reversed array

    return 0;
}
