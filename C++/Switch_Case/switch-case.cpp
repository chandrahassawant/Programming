#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    int ch;
    do
    {
        cout << "1: Cricket" << endl;
        cout << "2: Football" << endl;
        cout << "3: Kho-Kho" << endl;
        cout << "4: Soccer" << endl;
        count++;
    } while (count < 1);

    cout << "Enter your choice" << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "You are playing cricket" << endl;
        break;

    case 2:
        cout << "You are playing Football" << endl;
        break;

    case 3:
        cout << "You are playing Kho-Kho" << endl;
        break;

    case 4:
        cout << "You are playing Soccer" << endl;
        break;

    default:
        cout<< "Wrong input"<<endl;
    }
}