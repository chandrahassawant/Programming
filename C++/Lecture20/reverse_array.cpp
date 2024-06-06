#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while(s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return arr;
}

int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(4);

    cout << "Before reverse:" << endl;
    for(int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> ans = reverse(vec);

    cout << "After the reverse:" << endl;
    for(int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
