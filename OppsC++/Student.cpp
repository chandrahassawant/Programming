#include<iostream>
using namespace std;


class Students
{
    private:
    int marks;
    int age;
    int mobi;

    public:
    Students(int marks,int age,int mobi)

    {
        this->marks=marks;
        this->age=age;
        this->mobi=mobi;
    }

    int getMarks()
    {
        return marks;
    }
    int getAge()
    {
        return age;
    }
    int getMobi()
    {
        return mobi;
    }
};

int main()
{
    Students obj(50,60,1358);

    cout << "Marks: " << obj.getMarks() << endl;
    cout << "Age: " << obj.getAge() << endl;
    cout << "Mobile: " << obj.getMobi() << endl;

    return 0;

}