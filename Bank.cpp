#include<iostream>
#include<string>

using namespace std;

class bankaccount
{
    private:
        int accountnumber;
        string name;
        float balance;

    public:
        void getdata()
        {
            cout << "Enter Account Number : " << endl;
            cin >> accountnumber;

            cout << "Enter your name : " << endl;
            cin >> ws;
            getline(cin, name);

            cout << "Enter your Balance : " << endl;
            cin >> balance;
        }

        void display()
        {
            cout << "Account Number : " << accountnumber << endl;
            cout << "Name : " << name << endl;
            cout << "Balance : " << balance << endl;
        }

        void deposit(float amount)
        {
            balance = balance + amount;

            cout << "Amount Deposited successfully" << endl;
        }

        void withdraw(float amount)
        {
            balance = balance - amount;

            cout << "Amount Withdrawn" << endl;
        }

        void getbalance()
        {
            cout << "-- ACCOUNT DETAILS --" << endl;
            cout << "Account number : " << accountnumber << endl;
            cout << "Account Holder : " << name << endl;
            cout << "Current Balance : " << balance << endl;
        }

};

int main()
{
    bankaccount b1;

    b1.getdata();
    b1.display();
    b1.deposit(15000);
    b1.withdraw(10000);
    b1.getbalance();

    return 0;
}