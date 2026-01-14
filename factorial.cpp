#include <iostream>
using namespace std;

int main() 
{
    int i, factorial = 1;

    for (i = 1; i <= 10; i++)
     {
        factorial = factorial * i;
        cout << factorial << endl;
     }

    return 0;
}

