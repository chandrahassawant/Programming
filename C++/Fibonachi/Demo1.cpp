#include<iostream>
using namespace std;

// Function declaration
int Fibo(int terms);

int main()
{
    int terms;
    cout << "Enter the Terms: ";
    cin >> terms;

    int ter = Fibo(terms);

    cout << "Result: " << ter << endl;

    return 0;
}

// Function definition
int Fibo(int terms)
{
    int first = 0, second = 1, next;
    int sum = 0;

    for (int i = 0; i < terms; i++)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        sum += next;
    }

    return sum;
}
