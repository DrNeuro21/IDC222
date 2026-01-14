#include<iostream>
#include<cmath>
using namespace std;
int main()
{	
	float vel, ang, range;
	cout << "Input Initial velocity in m/s" << endl;
	cin  >> vel;
	cout << "Input angle :" << endl;
	cin  >> ang;
	
	range = (vel * vel) * (ang * (3.14/180)) / 9.8;
	
	cout << "Range is " << range << endl;

	return 0;
}	


