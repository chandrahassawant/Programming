#include<iostream>
//#include<algorithm>
using namespace std;

void reverse(char name[], int length) {
    int s = 0;
    int e = length - 1;

    while (s < e) {
        swap(name[s], name[e]);
        s++;
        e--;
    }

    cout << "The reverse name is: " << name << endl;
}

int main() {
    char name[20];
    cout << "Enter the name: ";
    cin >> name;

    int length = 0;
    while (name[length] != '\0') {
        length++;
    }

    cout << "The length of name is: " << length << endl;

    reverse(name, length);
    
    return 0;
}
