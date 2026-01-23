#include <iostream>
#include <string>
using namespace std;

class smartphone
{
	private:
	    string brand;
	    string model;    
	    float price;      

	public:
    
    	void setdata(string b, string m,  float p)
    	{
        	brand = b;
        	model = m;
        	price = p;
    	}

   
    	void showdata()
    	{
        	cout << "Brand   : " << brand << endl;
        	cout << "Model   : " << model << endl;
        	cout << "Price   : " << price << endl;
    	}
};

int main()
{
    smartphone phone1;

    phone1.setdata("Apple", "iphone 16e", 48000.00);
    phone1.showdata();

    return 0;
}

