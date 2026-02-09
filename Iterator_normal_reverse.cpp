
/*

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    vector<int>::iterator it;

    cout << "Normal Vector :" << endl;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    vector<int>::reverse_iterator rit;

    cout << "Reverse Order :" << endl;

    for (rit = v.rbegin(); rit != v.rend(); rit++)
    {
        cout << *rit << " ";
    }

    return 0;
}

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

  

    cout << "Normal Vector :" << endl;

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    vector<int>::reverse_iterator rit;

    

    for (auto rit = v.rbegin(); rit != v.rend(); rit++)
    {
        cout << *rit << " ";
    }

    return 0;
}

