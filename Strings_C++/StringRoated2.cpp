#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s1 = "Leetcode";
    string s2 = "deLeetco";

    if (s1.size() != s2.size()) {
        cout << "Not" << endl;
        return -1;
    }

    // Create a vector to store the last two characters of s1
    vector<char> Eans1;

    // Ensure s1 has at least two characters
    if (s1.size() >= 2) {
        // Store the last two characters of s1 into Eans1
        Eans1.push_back(s1[s1.size() - 2]);
        Eans1.push_back(s1[s1.size() - 1]);
    }
    else {
        cout << "String s1 is too short." << endl;
        return -2;
    }

    // Check if the first two characters of s2 match with Eans1
    if (Eans1[0] == s2[0] && Eans1[1] == s2[1]) {
        cout << "Yes" << endl;
    }
    else {
        cout << "Not" << endl;
    }

    return 0;
}
