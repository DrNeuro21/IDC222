#include <iostream>
#include <string>
using namespace std;

class bank_account
{
private:
    int accountnumber;
    string holdername;
    float balance;

public:
    void setaccount(int accno, string name, float bal);
    void deposit(float amount);
    void withdraw(float amount);
    void checkbalance();
};

void bank_account::setaccount(int accno, string name, float bal)
{
    accountnumber = accno;
    holdername = name;
    balance = bal;
}

void bank_account::deposit(float amount)
{
    balance = balance + amount;
    cout << "Amount deposited successfully" << endl;
}

void bank_account::withdraw(float amount)
{
    balance = balance - amount;
    cout << "Amount withdrawn successfully" << endl;
}

void bank_account::checkbalance()
{
    cout << "Account number : " << accountnumber << endl;
    cout << "Account holder : " << holdername << endl;
    cout << "Balance : " << balance << endl;
}

int main()
{
    bank_account acc1;
    acc1.setaccount(111, "Me", 208373.2);
    acc1.deposit(500000);
    acc1.checkbalance();

    return 0;
}

