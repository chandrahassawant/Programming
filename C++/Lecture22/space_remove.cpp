#include<iostream>
#include<vector>
using namespace std;


    vector<string>remove(vector<string>arr,int len)
    {
        vector<string>result;

        for(string i: arr)
        {
            if(!arr.empty())
            {
                result.push_back(i);
            }
        }
        return result;
    }

int main() {
    vector<string> arr;

    cout << "Enter the strings (enter an empty string to stop):" << endl;

    string input;
    while (true) {
        getline(cin, input); // Read a string including spaces
        if (input.empty()) {
            break; // If the input is empty, stop reading
        }
        arr.push_back(input); // Add the input string to the vector
    }

    // cout << "The strings you entered are:" << endl;
    // for (int i = 0; i < arr.size(); i++) {
    //     cout << arr[i] << " "; // Print each string in the vector
    // }

    int len= arr.size();

   vector<string>ans =remove(arr,len);

   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }

    return 0;
}
