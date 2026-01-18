#include<iostream>
using namspace std;
int main()

{
 	int n, i;
 	int f = 1, sum = 0;
 	
 	cout << "Number of terms" << endl;
 	cin >> n;
 	
 	for ( i = 1, i <= 0; i++ )
 	{
 		f = f * i;
 		sum = sum + f;
 		
 	}
 	
 	cout << "The factorial sum is :" << sum << endl;
 	
 	return 0;
 	
 }		
