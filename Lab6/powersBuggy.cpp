//Andrew Logue 10/31/2019

#include <iostream>
#include <cmath>
using namespace std;


int main()
{

	int x, a=1;
	cout << "Please enter a value for x = " ;
	cin >> x; 

	cout << "x to the power of " << ++a;
	cout << " is equal to " << pow(x,a) << endl;

	cout << "x to the power of " << ++a;
	cout << " is equal to " << pow(x,a) << endl;

	cout << "x to the power of " << ++a;
	cout << " is equal to " << pow(x,a) << endl;

	return 0;
}

