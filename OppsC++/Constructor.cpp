#include<iostream>
using namespace std;

class Laptop
{

    public :
    string name;
    double price;

    Laptop()
    {
        cout<<"Default constructor called"<<endl;
    }

    void setName(string name)
    {
        this->name=name;
    }
    void setPrice(int price)
    {
        this->price=price;
    }



    
};

int main()
{
    Laptop A;
    A.setName("Hp");
    A.setPrice(20000);

    

    return 0;
}