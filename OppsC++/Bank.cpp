#include<iostream>
using namespace std;


class Banks
{
    private:
    string name;
    int account_no;
    int age;
    string address;
    string accountType;

    public:
    Banks(string name,int account_no,int age,string address,string accountType)
    {
        this->name=name;
        this->account_no=account_no;
        this->age=age;
        this->address=address;
        this->accountType=accountType;
    }

    string getName()
    {
        return name;
    }

    int getaccount_noName()
    {
        return account_no;
    }
    int getAge()
    {
        return age;
    }
    string getAddress()
    {
        return address;
    }
    string getAccountType()
    {
        return accountType;
    }

};


int main()
{   

    Banks obj("Chandu",12345,25,"Kudal","Saving");
      cout << "Name: " << obj.getName() << endl;
    cout << "Account Number: " << obj.getaccount_noName() << endl;
    cout << "Age: " << obj.getAge() << endl;
    cout << "Address: " << obj.getAddress() << endl;
    cout << "Account Type: " << obj.getAccountType() << endl;


    cout<<sizeof(obj);
    //cout<<sizeof(Banks);
    return 0;
}