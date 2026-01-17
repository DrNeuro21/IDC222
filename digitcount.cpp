
#include<iostream>
using namespace std;

int main() 
{
    int n, digit_count = 0;
    	cout << "Enter a number: ";
    	cin >> n;

    if (n == 0) 
    {
    
        digit_count = 1;
    } 
    
    else 
    {    
        while (n != 0) 
        {
            n /= 10;  
            
            digit_count++;  
        }
    }

    cout << "Number of digits: " << digit_count << endl;

    return 0;
}

