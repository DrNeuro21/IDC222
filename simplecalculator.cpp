#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
	return a + b;
}
template<typename T>
T subtract(T a, T b)
{
	return a - b;
}
template<typename T>
T multiply(T a, T b)
{
	return a * b;
}
template<typename T>
T divide(T a, T b)
{
	return a / b;
}

int main()
{
	int x = 10;
	int y = 20;
	
	float a = 10.10;
	float b = 20.20;
	
	cout << add<int>(x,y) <<endl;
	cout << add<float>(a,b) << endl;
	cout << subtract<int>(x,y) <<endl;
	cout << subtract<float>(a,b) << endl;
	cout << multiply<int>(x,y) <<endl;
	cout << multiply<float>(a,b) << endl;
	cout << divide<int>(x,y) <<endl;
	cout << divide<float>(a,b) << endl;
	
	return 0;
}		
