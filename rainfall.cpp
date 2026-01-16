#include<iostream>
using namespace std;

int main() 
{
    float rainfall[] = {12.5, 18.2, 15.0, 20.4, 17.8, 16.3};
    int size = sizeof(rainfall) / sizeof(rainfall[0]);  
    
    float max = rainfall[0];
    
    for (int i = 1; i < size; i++) 
    {
        if (rainfall[i] > max) max = rainfall[i];
    }
    
    cout << "Max Rainfall: " << max << endl;
    cout << "Number of values: " << size << endl;
    return 0;
}

