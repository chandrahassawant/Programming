#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    bool flag = true;
    if (num <= 1)
    {
        flag = false;
    }
    else
    {
        for (int i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
    {
        cout << "The number is prime" << endl;
    }
    else
    {
        cout << "The number is not prime" << endl;
    }

    return 0;
}
