#include<iostream>
using namespace std;

class person
{
	private:
		int age;
	public:
		int id;
};

int main()
{
	person A;
	
	A.id = 101;
	
	cout << "ID : " << A.id << endl;
	
	A.age = 21;
	
	return 0;
}

