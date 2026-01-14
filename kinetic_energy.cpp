#include<iostream>
using namespace std;
int main()
{
	float mass, velocity, Kinetic_energy;
	
	cout << "Enter mass in kgs \n" << endl;
	cin  >> mass;
	cout << "Enter velocity in m/s \n" << endl;
	cin  >> velocity;
	
	Kinetic_energy = 0.5 * mass * (velocity*velocity);

	cout << "The kinetic energy is " << Kinetic_energy << "kgm/s^-1" << endl;
	
	return 0;
}	
