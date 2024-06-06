#include<iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n) {
    int i = 0, j = 0, k = 0;
    int arr3[m + n];

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < m) {
        arr3[k++] = arr1[i++];
    }

    while (j < n) {
        arr3[k++] = arr2[j++];
    }

    cout << "Merged array: ";
    for (int l = 0; l < m + n; ++l) {
        cout << arr3[l] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {2, 4, 6, 8, 10};
    int arr2[5] = {1, 3, 5, 7, 9};

    merge(arr1, 5, arr2, 5);

    return 0;
}
