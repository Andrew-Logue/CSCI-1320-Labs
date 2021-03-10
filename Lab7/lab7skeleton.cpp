 //Andrew Logue 11/8/2019
 //skeleton code for assignment 7
 //*note: I continued to work on this code past the specified minimum
 //skeleton code required

#include <iostream>
#include <ctime>
using namespace std;

//global variable scoreTotal
int scoreTotal = 0;

//gets random number between 1 - 6, dice roll
//takes in nothing. Returns a random integer in {1, 2, 3, 4, 5, 6}
int roll() {
    int out = rand() % 6  + 1;
    return out;
}

//takes in a single boolean variable to indicate whether it’s user’s or computer’s turn
//Plays out the entire turn until player either rolls a 3 or chooses to hold
//Returns the turn total as an integer value
//calls the roll function
int oneTurn(bool mode) {
    //initialize variables
    bool rollhold = 1;
    int in;
    int rollTemp;
    int score = 0;
    int rollCount = 0;
    int compMin = 4; 
    int playerScore = scoreTotal/2;
    int computerScore = scoreTotal/2;

    //computer mode
    if (mode == 0) {
        while (rollhold != 0 && rollCount < 4) {
            //computer rolls
            
            rollTemp = roll();
            score = score  + rollTemp;
            cout << "Computer Gary rolled a " << rollTemp << "!" << endl;
            rollCount++;

            //if roll was a 3, total score becomes 3 and game is over
            if (rollTemp == 3) {
                score = 3;
                //print score and tell user the computer's game is over
                cout << "TURN OVER" << endl;
                cout << "Computer Gary's final turn score is: " << score << endl;
                rollhold = 0;
            }
                else {
                    //if the computer did not roll a 3, print
                    //their new score total
                    cout << "Computer Gary's total turn score is " << score << endl;
                }
        }

        if (rollhold != 0 && (rand() % 100 + 1) > 50) {
            cout << "Computer Gary decided to continue rolling!" << endl;
            while (rollhold != 0 && rollCount < 6) {
            //computer rolls
            rollTemp = roll();
            score = score  + rollTemp;
            cout << "Computer Gary rolled a " << rollTemp << "!" << endl;
            rollCount++;

            //if roll was a 3, total score becomes 3 and game is over
            if (rollTemp == 3) {
                score = 3;
                //print score and tell user the computer's game is over
                cout << "TURN OVER" << endl;
                cout << "Computer Gary's final turn score is: " << score << endl;
                rollhold = 0;
            }
                else {
                    //if the computer did not roll a 3, print
                    //their new score total
                    cout << "Computer Gary's total turn score is " << score << endl;
                }
        }
        }

        //computer holds
        if (rollhold  != 0) {
            //print out final score
            cout << "Computer Gary decided to hold!" << endl;
            cout << "Computer Gary's final score is: " << score << endl;
        }
    }

    //human mode
    if (mode == 1) {
        //while loop keep game running until player chooses hold
        while (rollhold != 0) {
        //ask if player wants to roll or hold
        cout << "1 = roll, 0 = hold" << endl;
        cin >> rollhold;

        //player choose to roll
        if (rollhold == 1) {
            rollTemp = roll();
            score = score  + rollTemp;
            cout << "You rolled a " << rollTemp << "!" << endl;
            
            //if roll was a 3, total score becomes 3 and game is over
            if (rollTemp == 3) {
                score = 3;
                rollhold = 0;
                //print score and tell player their game is over
                cout << "TURN OVER" << endl;
            }
                else {
                    //if the player did not roll a 3, print
                    //their new score total
                    cout << "Your total turn score is " << score << endl;
                }
        }

        //player choose to hold
        if (rollhold  == 0) {
            //print out final score
            cout << "Your final turn score is: " << score << endl;
        }
        }
    }   
    return score;
}

//takes in a single integer value for game points goal 
//Continues to repeat until either computer player or human player has won.
//Returns a boolean value (1 = computer win, 0 = human win)
//calls the oneTurn function
bool loopGame(int scoreTotal) {
    //initialize variables
    bool mode;
    bool winner;
    int tempScore;
    int playerScore = scoreTotal / 2;
    int computerScore = scoreTotal / 2;

    
    //The player who takes the first turn in the game is chosen randomly.
    int modeInitial = rand() % 2;

    //Continues to repeat until either computer player or human player has won.
    while (playerScore < scoreTotal && computerScore < scoreTotal) {
        if (modeInitial == 1) {
            mode = 1;
            tempScore = oneTurn(mode);
            playerScore = playerScore + tempScore;
            computerScore = computerScore - tempScore;
            cout << "Human player's total score is " << playerScore << endl;
            cout << "Computer Gary's total score is " << computerScore << endl;
            mode = 0;
            tempScore = oneTurn(mode);
            playerScore = playerScore - tempScore;
            computerScore = computerScore + tempScore;
            cout << "Human player's total score is " << playerScore << endl;
            cout << "Computer Gary's total score is " << computerScore << endl;
        }
        else {
            mode = 0;
            tempScore = oneTurn(mode);
            playerScore = playerScore - tempScore;
            computerScore = computerScore + tempScore;
            cout << "Human player's total score is " << playerScore << endl;
            cout << "Computer Gary's total score is " << computerScore << endl;
            mode = 1;
            tempScore = oneTurn(mode);
            playerScore = playerScore + tempScore;
            computerScore = computerScore - tempScore;
            cout << "Human player's total score is " << playerScore << endl;
            cout << "Computer Gary's total score is " << computerScore << endl;
        }
    }

    //determine who won
    if (playerScore >= scoreTotal) {
        winner = 0;
    }
    else {
        winner = 1;
    }
    return winner;
}

int main() {
    //seeding the randomizer
    srand(time(NULL));
    cout << "Enter total score to win: " << endl;
    cin >> scoreTotal;
    //start game, total score to win set with user input
    bool winner  = loopGame(scoreTotal);

    //output statement displaying who won the game, human or computer
    if (winner == 0) {
        cout << "Human wins!" << endl;
    }
    else {
        cout << "Computer wins!" << endl;
    }
}