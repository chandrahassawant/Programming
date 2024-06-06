
#include<iostream>
using namespace std;

void selection(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int minIndex=i;

        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex!=i)
        {
            swap(arr[i],arr[minIndex]);
        }
    }
}

int main()
{
    int arr[] = {10,9,8,7,6,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    selection(arr,size);

    cout<<"The sorted array is "<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}