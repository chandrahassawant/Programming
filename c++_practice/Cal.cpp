#include<iostream>
using namespace std;
class Cal 
{
    public:
    static int add(int a,int b)
    {
        return a+b;
    }

};

int main()
{
    // Cal sum();
    cout<<Cal::add(10,20)<<endl;
    return 0;

}