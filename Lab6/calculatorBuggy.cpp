//Andrew Logue 10/31/2019

#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num2 == 0) {
        cout << "Your second number cannot be 0,  please enter another number: " << endl;
        cin >> num2;
    }

    cout << "num1 + num2 = " << num1 + num2 << endl;
    cout << "num1 - num2 = " << num1 - num2 << endl;
    cout << "num1 * num2 = " << num1 * num2 << endl;
    cout << "num1 / num2 = " << num1 / num2 << endl;

    return 0;
}