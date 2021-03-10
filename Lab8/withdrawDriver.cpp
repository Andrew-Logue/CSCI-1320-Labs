//Andrew Logue 11/15/19

#include <iostream>
using namespace std;

string accountPassword[] = {"Andy", "Jessy", "Nessie", "Bessy", "Leslie", "Barry", "Larry", "Frosty", "Sneezy", "Gary"};
string accountBalance[] = {"213","234","765","54","23","6","235","245","235","5","9680","70"};

void withdraw(int accountBalanceIndex, int accountPasswordIndex) {
    //ask the user to enter the password. If the password entered matches
    //the password of the account, go to the next step. If not, display ”Wrong password!” and return
    //to the menu

    //Show the current balance and ask the user to enter the withdraw amount. (Suppose the user
    //does not enter a negative amount.)
    cout << "Current balance: $144" << endl;
    
    //If the input amount is greater than the current balance, go to the previous step. Otherwise, go
    //to the next step.

    //Subtract the withdraw amount from the balance of the account.
}

void main() {
    int balanceIndex = 0;
    int passwordIndex = 0;

    string name;
    cout << "Enter name: " << endl;
    cin >> name;

    //Check the database has an account that matches the name. If there is a matching account, call
    //a function called withdraw, which takes in a reference to an accountBalance element and a value
    //to an accountPassword element using the detected index, and go to the next step. If not, display
    //”No account!” and return to the menu

    withdraw(balanceIndex, passwordIndex);
}