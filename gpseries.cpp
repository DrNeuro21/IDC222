#include <iostream>
#include <cmath>  

using namespace std;

int main() 
{
    int a, r, n, GP_series;

    
    cout << "Enter first term a: ";
    cin >> a;
    
    cout << "Enter common ratio r: ";
    cin >> r;
    
    cout << "Enter number of terms n: ";
    cin >> n;

    
    if (r == 1)
     	{
      	  GP_series = a * n;
   	 } 
    else
    	 {
       	 GP_series = a * (1 - pow(r, n)) / (1 - r);
  	  }

    
    cout << " GP seriees: " << GP_series << endl;
    
    return 0;
}

