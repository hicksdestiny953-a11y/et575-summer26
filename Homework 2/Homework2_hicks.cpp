/*
Destiny Hicks
Homework 2: Loop mechanism
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    do {
        cout << "Enter a number greater than or equal to 10: ";
        cin >> number;

        if (number < 10) {
            cout << "Invalid input. Please try again.\n";
        }
    } while (number < 10);

    cout << number << " is a valid number!\n";

    //question 2
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int current, max_val;

    if (num1 < num2) {
        current = num1;
        max_val = num2;
    } else {
        current = num2;
        max_val = num1;
    }

    while (current <= max_val) {
        cout << current << " ";
        current++;
    }
    cout << "\n";

//Question 3
    const int DIMENSION = 10;
    for (int row = 0; row < DIMENSION; row++) {
        for (int col = 0; col < DIMENSION; col++) {
            
            // Equation conditions to print the heart shape grid points
            if ((row == 1 && (col == 2 || col == 3 || col == 6 || col == 7)) ||
                (row == 2 && (col == 1 || col == 4 || col == 5 || col == 8)) ||
                (row == 3 && (col == 1 || col == 9)) ||
                (row == 4 && (col == 2 || col == 8)) ||
                (row == 5 && (col == 3 || col == 7)) ||
                (row == 6 && (col == 4 || col == 6)) ||
                (row == 7 && col == 5)) 
            {
                cout << "% ";
            } else {
                cout << ". ";
            }
        }
        cout << "\n"; 
    }

    return 0;

}
