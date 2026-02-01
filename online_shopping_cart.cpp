#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, x;

    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    if (v.empty())
    {
        cout << "First item: " << v.front() << endl;
        cout << "Last item: " << v.back() << endl;
    }

    v.pop_back();

    cout << "After pop_back:" << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    
  
	
    cout << "Vector size: " << v.size() << endl;

    if (v.empty())
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is not empty" << endl;

    return 0;
}

