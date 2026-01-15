#include<iostream>
#include<cmath>  
using namespace std;


float computeArea(float r) 
{
    return M_PI * r * r;  
}

float computePerimeter(float r)
{
	return 2 * M_PI * r;
}	

int main() 
{
    float radius;

    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    
    float area = computeArea(radius);
    float Perimeter = computePerimeter(radius);
    
    cout << "Area of the circle: " << area << endl;
    cout << "Area of the circle: " << Perimeter << endl;

    return 0;
}

