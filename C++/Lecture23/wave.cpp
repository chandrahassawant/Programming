#include<iostream>
#include<vector>

using namespace std;

void wavepattern(vector<vector<int>>arr)
{
    int rows=arr.size();
    int cols=arr.size();

    vector<int> ans;

    for(int j=0;j<cols;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<rows;i++)
            {
                ans.push_back(arr[i][j]);
            }
        }
        else
        for(int i=rows-1;i>=0;i++)
        {
            ans.push_back(arr[i][j]);
        }
    }

    for(int i : ans)
    {
        cout<<i<<" ";
    }
    

}

