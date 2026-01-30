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
    
    T add()
    {
    	return n1 + n2;
    }
    
    T subtract()
    {
    	return n1 - n2;
    }
    T multiply()
    {
    	return n1 * n2;
    }
    T divide()
    {
    	return n1 / n2;
    }
    
};


int main()
{
    calculator<int> c1(2, 1);
    cout << "Int results:" << endl;
    cout << "Numbers 2 and 1" << endl;
    cout << "Add: " << c1.add() << endl;
    cout << "Subtract: " << c1.subtract() << endl;
    cout << "Multiply: " << c1.multiply() << endl;
    cout << "Divide: " << c1.divide() << endl;    	
    
    cout << endl;
    		
    calculator<float> c2(2.4, 1.2);
    cout << "Float results:" << endl;
    cout << "Numbers 2.4 and 1.2" << endl;
    cout << "Add:" << c2.add() << endl;
    cout << "Subtract:" << c2.subtract() << endl;
    cout << "Multiply:" << c2.multiply() << endl;
    cout << "Divide:" << c2.divide() << endl;
 
    return 0;
}       
    
    
    
    
    
    
    
