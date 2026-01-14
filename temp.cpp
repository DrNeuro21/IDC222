#include <iostream>
using namespace std;

int main() 
{
    float T;

    cout << "Enter temperature of water in Celsius: ";
    cin >> T;

    if (T <= 0) 
    {
        cout << "Water is in solid phase (ice)." << endl;
    }
    else if (T < 100) 
    {
        cout << "Water is in liquid phase." << endl;
    }
    else
    {
        cout << "Water is in gaseous phase (steam)." << endl;
    }

    return 0;
}

