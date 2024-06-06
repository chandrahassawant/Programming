#include<iostream>
using namespace std;


    bool search(int arr[3][4],int target)
    {
        
         for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }

    }
        return 0;
    }
int main()
{
    int arr[3][4];

    cout<<"Enter the elements"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }

    }
    int target=0;
    cout<<"Enter the element to search"<<endl;
    cin>>target;

    cout<<search(arr,target);
}