#include<iostream>
using namespace std;

int main()
{
    int i = 0; // Initialize i
    int number;
    cout << "Enter the number" << endl;
    cin >> number;

    while (i < 10)
    {
        cout << "Number is : " << (number * i) << endl; // Use << operator for both strings and integers
        i++;
    }
    return 0;
}
