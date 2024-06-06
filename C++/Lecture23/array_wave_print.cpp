#include<iostream>
#include<vector>

using namespace std;

  void wave(vector<vector<int>>& arr) {
    int rows = arr.size();
    int col = arr[0].size();
    vector<int> ans;
    
    for(int j = 0; j < col; j++) {
        if (j % 2 == 0) { // For even-indexed columns, iterate from top to bottom
            for(int i = 0; i < rows; i++) {
                ans.push_back(arr[i][j]);
            }
        } else { // For odd-indexed columns, iterate from bottom to top
            for(int i = rows - 1; i >= 0; i--) {
                ans.push_back(arr[i][j]);
            }
        }
    }

    // Print the elements in wave pattern
    for(int i : ans) {
        cout << i << " ";
    }
}

int main()
{
     vector<vector<int>> arr(3, vector<int>(3)); // Initialize a 2x2 vector

    // Input values into the vector
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The 2D vector is:" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    wave(arr);

}


