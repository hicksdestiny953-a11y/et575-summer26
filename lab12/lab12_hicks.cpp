/*
Destiny Hicks
June 10, 2026
lab 12, nested loops
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n------- Example 1: Nested while  Loop -----------" << endl;

    int i = 0;
    while (i++ < 3) {
        cout << "Outer loop " << i << endl;
        cout << "\t\t INNER loop" << endl;

        int j = 0;
        while (j++ < 5) {
            cout << "\t" << j << endl;
        }
        cout << endl;
    }


    cout << "\n------- Example 2: nested for loop -----------" << endl;

    int row = 0, seats = 0;
    cout << "Enter the number of rows : ";
    cin >> row;

    cout << "Enter the number of seats per row : ";
    cin >> seats;
    
    
    for (int r = 1; r <= row; r++) {
        for (int c = 1; c <= seats; c++) {
            cout << "row " << r << " Seat " << c << "\t ";
        }
        cout << endl;
    }


    cout << "\n------- Example 3: graphing using nested loops -----------" << endl;

    const int GRAPHSIZE = 9;
    for (int row = 1; row <= GRAPHSIZE; row++) {
        
        for (int col = 1; col <= GRAPHSIZE; col++) {
            if (col == 5 || row == 5) {
                cout << "x";
            }
            else {
                cout << ".";
            }
        } 
        cout << endl;
    }
cout << "\n------- Example 4: logical patterns in nested loops -----------" << endl;
    int dimension = 10;
    for (int row = 1; row <= dimension; row++) {
        for (int col = 1; col <= dimension; col++) {
            if (((row >= 3 && row <= 8) && (col >= 3 && col <= 4)) ||
                ((row >= 5 && row <= 6) && (col >= 5 && col <= 6))) {
                cout << "%";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
cout << "\n------- Lab Exercise A: Number Guessing Game -----------" << endl;

const int GUESS = 5;
int userGuess;

do {
    cout << "Guess a number between 1 and 10: ";
    cin >> userGuess;

    while (userGuess < 1 || userGuess > 10) {
        cout << "Invalid number. Enter a number between 1 and 10: ";
        cin >> userGuess;
    }

    if (userGuess > GUESS) {
        cout << "The entered number is high." << endl;
    } else if (userGuess < GUESS) {
        cout << "The entered number is low." << endl;
    } else {
        cout << "Correct! You guessed the right number." << endl;
    }

} while (userGuess != GUESS);
cout << "\n------- Lab Exercise B: 10x10 Graph -----------" << endl;
    int dimension2 = 10;
    for (int row = 1; row <= dimension; row++) {
        for (int col = 1; col <= dimension2; col++) {
            if (
                ((row >= 3 && row <= 8) && (col >= 3 && col <= 4)) ||
                ((row >= 3 && row <= 8) && (col >= 7 && col <= 8)) ||
                ((row >= 7 && row <= 10) && (col >= 5 && col <= 6))
               ) {
                cout << "%";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
