#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = (m + n) - 1;

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    while (i >= 0) {
        arr1[k--] = arr1[i--];
    }

    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }

    for (int i : arr1) {
        cout << i << " ";
    }
}

int main() {
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};
    int m = 3;  
    int n = 3;  

    merge(arr1, m, arr2, n);
}
