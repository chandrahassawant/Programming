#include <iostream>
using namespace std;

void printarray(int number[])
{
    for (int i = 0; i < 5; i++) // Adjusted loop condition
    {
        cout << number[i] << endl;
    }
}

int main()
{
    int number[] = {5, 7, 9, 14, 28};

    printarray(number);
    return 0; // Added return statement
}
