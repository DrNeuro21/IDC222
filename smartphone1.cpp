#include <iostream>
#include <string>
using namespace std;

class smartphone
{
private:
    string brand;
    string model;
    float price;

public:
    
    void inputData()
    {
        cout << "Enter brand name: ";
        cin >> ws;
        getline(cin, brand);

        cout << "Enter model name: ";
        cin >> ws;
        getline(cin, model);

        cout << "Enter price: ";
        cin >> price;
    }

   
    void displayData()
    {
        cout << "\nSmartphone Details\n";
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{
    smartphone phone,phone1;

    phone.inputData();
    phone.displayData();
    phone1.inputData();
    phone1.displayData();

    return 0;
}

