#include<iostream>
#include<vector>
using namespace std;

int main()
{

	vector<float> v;
	
	float temp;

    	cout << "Enter temperature reading for 7 days :" << endl;

 	   for (int i = 0; i <= 7; i++)
    		{
        		cin >> temp;
        		v.push_back(temp);
    		}
	
	
	
	cout << "Temperature readings :" << endl;

    	for (auto it = v.begin(); it != v.end(); it++)
  	 {
       		 cout << *it << " ";
   	 }

   	 cout << endl;
   	 
   	 cout << "Total reading : " << v.size() << endl;
   	  
   	 return 0;
}


    
   	 
	

