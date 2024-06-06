#include<iostream>
#include<string>
using namespace std;

int length(char word[])
{
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool palindrome(char word[], int len)
{
    int s = 0;
    int e = len - 1;

    while (s < e)
    {
        if (word[s] != word[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    char word[20];
    cout << "Enter the word: ";
    cin >> word;

    int len = length(word);

    if (palindrome(word, len))
    {
        cout << "String is a palindrome" << endl;
    }
    else
    {
        cout << "String is not a palindrome" << endl;
    }

    return 0;
}
