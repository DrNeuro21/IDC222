#include<iostream>
#include<set>
#include<string>
using namespace std;

void findcommoncharacters(string str1, string str2)
{
    set<char> set1(str1.begin(), str1.end());
    set<char> set2(str2.begin(), str2.end());
    set<char> common;
    
    for (char ch : set1)
    {
        if(set2.find(ch) != set2.end())
        {
            common.insert(ch);
        }
    }
    
    cout << "Common Characters: ";
    for (char ch : common)
    {
        cout << ch << " ";
    }
    
    cout << endl;
}

int main()
{
    string str1, str2;
    
    cout << "First string: ";
    getline(cin, str1);
    
    cout << "Second string: ";
    getline(cin, str2);
    
    findcommoncharacters(str1, str2);
    
    return 0;
}

