#include<iostream>
using namespace std;

template<class T>

class calculator
{
private:
    T n1, n2;

public:
	
    calculator(T a, T b)
    {
        n1 = a;
        n2 = b;
    }    
    
    T getMax()
    {
    	return n1 , n2;
    }
    
    T getMin()
    {
    	return n1 , n2;
    }
    T getAverage()
    {
    	return (n1 + n2) / 2;
    }

};


int main()
{
    calculator<int> c1(2, 1);
    cout << "Int stats:" << endl;
    cout << "Max:" << c1.getMax() << endl;
    cout << "Min:" << c1.getMin() << endl;
    cout << "Average" << c1.getAverage() << endl;  	
    
    cout << endl;
    		
    calculator<float> c2(2.4, 1.2);
     cout << "float stats:" << endl;
    cout << "Max:" << c2.getMax() << endl;
    cout << "Min:" << c2.getMin() << endl;
    cout << "Average" << c2.getAverage() << endl;  
 
    return 0;
}       
    
    
    
    
    
    
    
