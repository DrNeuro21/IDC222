#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l = {5, 10, 15};
	
	list<int>::iterator it;
	
	for(it = l.begin(); it != l.end(); ++it)
	{
		cout << *it << " " << endl;
	}
	
	return 0;
}		
