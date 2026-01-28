#include<iostream>
#include<string>
using namespace std;

class student
{
	private:
		int roll_no;
		string name;
		float marks;
	public:
		void setdata(int r, string n, float m)
		{
			roll_no = r;
			name = n;
			marks = m;
		}
		
		void display()
		{
			cout << "Roll Number : " << roll_no << endl;
			cout << "Name : " << name << endl;
			cout << "Marks : " << marks << endl;
		}
};

int main()
{
	student s1;
	s1.setdata(24137, "Meetanshu", 100.00);
	s1.display();					
	
	return 0;
}	
