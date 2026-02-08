#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v = {10, 20, 30, 40, 50};
	
	
	v.insert(v.begin() + 2, 300);
	
	cout << "After insert : " << endl;
	
	for(int x : v)
	{
		cout << x << " " << endl;
	}
	
	cout << endl;
	
	v.erase(v.begin() +3);
	
	cout << "After removal " << endl;
	
	for(int x : v)
	{
		cout << x << " " << endl;
	}
	
	return 0;
}			
