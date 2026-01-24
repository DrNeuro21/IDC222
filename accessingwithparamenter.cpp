#include<iostream>
using namespace std;

class person
{
	private:
		int age;
	public:
		void setage(int a)
		{
			age = a;
		}
		void showage()
		{
			cout << "Age : " << age << endl;
		}
};

int main()
{
	person p;
	
	p.setage(21);
	p.showage();
	
	return 0;
}					
