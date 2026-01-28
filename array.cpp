#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, i;
    
    cout << "Enter the array size" << endl;
    cin >> n;

    vector<float> a(n);

    cout << "Enter " << n << " elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Array elements are:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

