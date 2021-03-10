//Andrew Logue 11/15/19

#include <iostream>
using namespace std;

//initialize both account arrays
string accountName[] = {"Andy", "Jessy", "Nessie", "Bessy", "Leslie", "Barry", "Larry", "Frosty", "Sneezy", "Gary"};
string accountPassword[] = {"213","234","765","54","23","6","235","245","235","5","9680","70"};

int newAccount (int accountNameIndex, int accountPasswordIndex) {
        cout << "Enter name: " << endl;
        cin >> accountName[accountNameIndex];

        cout << "Enter name: " << endl;
        cin >> accountPassword[accountPasswordIndex];

}

//add numbers
void main () {

    int index = 0;

    if (accountName[100].compare("") == 0) {
        for (int i = sizeof(accountName); i >= 0; i--){
            if (accountName[i].compare("") == 0) {
                index = i;
            }
        }
    }
    else {
        cout << "The bank account database is full" << endl;
    }

    //initialize index
    int nameIndex = index;
    int passwordIndex = index;

    //call newAccount with the given index
    newAccount(nameIndex, passwordIndex);

    // loop through the elements of the array
	for (int i = 0; i < sizeof(accountName); i++) {
		cout << accountName[i] << ' ';
	}

    cout << endl;
    for (int j = 0; j < sizeof(accountPassword); j++) {
		cout << accountPassword[j] << ' ';
	}
}