//Andrew Logue 11/15/19

#include <iostream>
using namespace std;

string accountPassword[] = {"Andy", "Jessy", "Nessie", "Bessy", "Leslie", "Barry", "Larry", "Frosty", "Sneezy", "Gary"};
string accountBalance[] = {"213","234","765","54","23","6","235","245","235","5","9680","70"};

void deposit(int accountBalanceIndex, int accountPasswordIndex) {
    //for loop loops through accountName array
    //if name matches, prompt user for password, if password does not match,
    //return to menu

    //ask user for deposit amount, must be positive
    //add amount to user's account
}


void main() {
    int balanceIndex = 0;
    int passwordIndex = 0;

    //Ask the user to enter a name.
    string name;
    cout << "Enter name: " << endl;
    cin >> name;

    //Check the database has an account that matches the name. If there is a matching account, call
    //a function called deposit. If not, display ”No account!” and return to the menu.
    deposit(balanceIndex, passwordIndex);
}