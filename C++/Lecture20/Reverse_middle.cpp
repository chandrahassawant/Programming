#include<iostream>
#include<vector>

using namespace std;

        vector <int>reverse(vector<int>vec,int mid, int size)
        {
            int start =mid+1;
            int end = vec.size()-1;

            for(int i=mid;i<size-1;i++)
            {
                if(start<=end)
                {
                    swap(vec[start],vec[end]);
                    start++;
                    end--;
                }
            }
            return vec;
        }
int main()
{

    vector<int>vec;

    vec.push_back(10);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);

    int size = vec.size();

    for (int i : vec)
   {
    cout<< i << " ";
   }
    //cout<<size;

   int mid = size/2;

   vector<int>ans=reverse(vec,mid,size);

    cout<<"After reverse"<<endl;
   for (int i : ans)
   {
    cout<< i << " ";
   }
   
    return 0;
}