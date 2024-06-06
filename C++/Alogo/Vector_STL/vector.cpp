

#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;

    vector<int>arr(size);
    
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}