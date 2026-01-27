#include<iostream>
using namespace std;

class book
{
	private:
		int book_id;
		string title;
		float price;
		
	public:
		book()
		{
			book_id = 0;
			title = "not assigned";
			price = 0.0;
		}
		
	void display()
	{
		cout << "Book id : " << book_id << endl;
		cout << "title : " << title << endl;
		cout << "Price : " << price << endl;
		
	}
};

int main()
{
	book b1;
	b1.display();
	
	return 0;
}						
