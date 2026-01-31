#include<iostream>
using namespace std;

template <class T>
class number
{
	private:
		T num;
	public:
		number(T n)
		{
			num = n;
		}
		
		T getnum()
		{
			return num;
		}
};

int main()
{
	number<int> n1(10);
	cout << n1.getnum() << endl;
	
	number<float> n2(25.56);
	cout << n2.getnum() << endl;
	
	return 0;
}
						
