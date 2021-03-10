//Andrew Logue 10/31/2019
//Program for calculating freefall distance as a function of time
//d = 1/2 * g * t^2


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main( )
{
	int d;
	const double g = 9.8;
	int t = 10;

	cout << "enter time: " << endl;
	cin >> t;

	d = .5 * g * pow(t, 2);

	cout << "distance = " << d << endl;


	return 0;
}
