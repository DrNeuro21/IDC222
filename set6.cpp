#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> lang = {{1, "c"}, {2, "cpp"}, {3, "py"}};
    
    
    for (auto it = lang.begin(); it != lang.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    cout << "Using range-based loop:" << endl;
    
    
    for (auto i : lang)
    {
        cout << i.first << " " << i.second << endl;
    }
    
    return 0;
}

