#include<iostream>
using namespace std;
#include<vector>


//     void name(string& nam)
//     {
//         cout<<nam;
//     }
// int main()
// {
//     cout<<"Enter the name"<<endl;
//     string nam;
//     getline(cin,nam);
//     name(nam);
    
// }


// int findlenght(string& name)
// {
//     int count_len=0;

//     for(int i=0;i<name.length();i++)
//     {
//         // cout<<name;
//         count_len++;
//     }

//     return count_len;
// }

//  int main()
//  {
//     string name;
//     cout<<"Enter the name of student"<<endl;
//     getline(cin,name);
//     int len=findlenght(name);
//     cout<<len;
//  }

// #include <iostream>
// #include <vector>
// using namespace std;

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void add_name(vector<string>& name, const string& s2)
{
    name.push_back(s2);
}

int main()
{
    vector<string> name;
    cout << "Enter the name: " << endl;
    string s1;
    string s2;
    getline(cin, s1);
    name.push_back(s1);
    cout << "Enter another name: " << endl;
    getline(cin, s2);
    add_name(name, s2);
    cout << "Added name: " << name.back() << endl; // Print the last added name
    
    return 0;
}

    