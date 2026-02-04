#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> ls = {11, 12, 13, 14};
	
	cout << "Initial List : " << endl;
	
	for (int n : ls)
	{
		cout << n << " " << endl;
	}
	
	ls.push_front(0);
	ls.push_back(100);
	
	cout << "After push_front & push_back" << endl;
	
	for (int n : ls)
	{
		cout << n << " " << endl;
	}
	
	ls.pop_front();
	ls.pop_back();
	
	cout << "After the pop " << endl;
	for (int n : ls)
	{
		cout << n << " " << endl;
	}
	
	return 0;
}				
