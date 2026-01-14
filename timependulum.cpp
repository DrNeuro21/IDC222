#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float time, length, g;
	
	cout << " Enter lenght in meters " << endl;
	cin  >> length;
	
	 time = 2 * 3.14 * sqrt(length / 9.8);
	
	cout << "time is :" << time << "sec" << endl;
	
	return 0;
}	




