#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 5, 7};
    set<int>::iterator it;
    
    it = s.find(5);   // Searching for value 5
    
    if(it != s.end())
    {
        cout << *it << " it is in the set" << endl;
    }
    else
    {
        cout << "It is not in the set" << endl;
    }
    
    return 0;
}

