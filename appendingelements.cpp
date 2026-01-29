#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << v.size() << '\n';

    v.push_back(2);
    cout << v.size() << '\n';

    v.push_back(7);
    cout << v.size() << '\n';

    v.push_back(0);
    cout << v.size() << '\n';

    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    return 0;
}

