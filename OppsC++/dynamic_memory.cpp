#include <iostream>
using namespace std;

class Mobiles
{
public:
    string companyName;
    int modelYear;
    double price;
    bool available;
};

int main()
{
    Mobiles *obj = new Mobiles;
    (*obj).companyName = "Realme";
    (*obj).modelYear = 2024;
    (*obj).price = 25000;
    (*obj).available = true;

    cout << "Company Name: " << obj->companyName << endl;
    cout << "Model Year: " << obj->modelYear << endl;
    cout << "Price: " << obj->price << endl;
    cout << "Available: " << (obj->available ? "Yes" : "No") << endl;

    delete obj;

    return 0;
}
