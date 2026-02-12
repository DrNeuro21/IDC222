#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
    set<char> charset = {'d', 'a', 'c', 'n'};
    cout << "Character set: ";
    for(char ch : charset)
    {
        cout << ch << " ";
    }
    
    cout << endl;
    
    set<string> stringset = {"Apple", "Mango", "Banana"};
    cout << "String set: ";
    for(string str : stringset)
    {
        cout << str << " ";
    }
    
    cout << endl;
    return 0;
}

