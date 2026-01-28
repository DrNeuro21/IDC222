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
		void getData()
		{
			cout << "Enter Roll no. : " << endl;
			cin >> roll_no;
			
			cout << "Enter name : " << endl;
			cin >> ws;
			getline(cin, name);
			
			
			cout << "Enter marks obtained : " << endl;
			cin >> marks;
		}
		
		void display()
		{
			cout << "Roll no. : " << roll_no << endl;
			cout << "Name : " << name << endl;
			cout << "Marks : " << marks << endl;
		}
};

int main()
{
	student s1;
	
	s1.getData();
	s1.display();
	
	return 0;
}	

			
			 	
