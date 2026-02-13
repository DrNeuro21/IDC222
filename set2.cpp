#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> numbers;
    int n, values;
    
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    
    cout << "Enter Elements: " << endl;
    
    for(int i = 0; i < n; i++)
    {
        cin >> values;
        numbers.insert(values);
    }
    
    cout << "Set elements: ";
    for(int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;
    
    int search = 5;
    
    if (numbers.find(search) != numbers.end())
    {
        cout << search << " Mila" << endl;
    }
    else
    {
        cout << search << " Nhi mila" << endl;
    }
    
    numbers.erase(10);
    
    cout << "After deletion, set elements: ";
    for(int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Size of set: " << numbers.size();
    
    return 0;
}

