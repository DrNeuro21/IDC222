#include <iostream>
using namespace std;

int main()
{
    char x = 'A';  // single quotes for char

    switch (x)
    {
        case 'A':
            cout << "Choice is A" << endl;
            break;
        case 'B':
            cout << "Choice is B" << endl;
            break;
        case 'C':
            cout << "Choice is C" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}

