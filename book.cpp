#include<iostream>
#include<string>
using namespace std;

class book
{
    private:
        int book_id;
        string name;
        int price;

    public:
        book(int id,string n, int p)
        {
            book_id = id;
            name = n;
            price = p;
        }

        void display()
        {
            cout << "Book ID : " << book_id << endl;
            cout << "Name : " << name << endl;
            cout << "Price : " << price << endl;
        }
};

int main()
{
    book b1(101, "Utah", 230);
    b1.display();

    return 0;
}