#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s = "1.1.1.1";

    vector<string> answer; // No need to initialize with size

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            answer.push_back("[.]"); // Push the string "[.]" instead of just the dot
        }
        else
        {
            string temp(1, s[i]); // Convert character to string
            answer.push_back(temp); // Push individual characters
        }
    }

    // Output the modified string
    for (const auto& str : answer)
    {
        cout << str;
    }

    return 0;
}
