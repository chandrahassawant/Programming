#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string>q;

    q.push("chandrahas");
    q.pop();

    cout<<q.empty()<<endl;
}