#include<iostream>
using namespace std;



    int sum(int arr[3][3])
    {
        int su= 0;
        for(int i=0;i<1;i++)
        {
            for(int j=0;j<3;j++)
            {
                su = su + arr[i][j];
            }
            i++;
        }
        return su;
    }
int main()
{
    int arr[3][3];

    cout<<"Enter the elements"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }

    }

    cout<<endl;
    cout<<sum(arr);
    
}