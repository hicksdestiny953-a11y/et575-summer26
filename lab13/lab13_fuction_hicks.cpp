/*
Destiny Hicks 
June 10, 2026
lab 13: introduction to function
*/
#include <iostream>
using namespace std;

// example 1: void function 
void printhi(){
    cout << "Hello Function!" << endl;
    return;
}

// example 2: void function with parameter
void greeting(string username){
    cout << "Good morning " << username << endl;
}

// example 3: function that returns a value
int dbnumber(int n){
    return n * 2;
}

// example 4: function that returns the area of a rectangle 
float arearectangle(int width, int length){
    return width * length;
}

// example 5: function that checks if a number is positive, negative, zero
string checknumber(int number){
    if (number > 0)
        return "positive";
    else if (number < 0)
        return "negative";
    else 
        return "zero";
}

// example 6: composition of function 
int postivenumber(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while (n <= 0){
        cout << "Error! Enter a positive: ";
        cin >> n;
    }
    return n;
}

// function 2 that calculates the area of a square
int areasquare(int side){
    return side * side;
}

// function 3 print result 
void printresult(int area){
    cout << "The area of a square is " << area << endl;
    return;
}

// example 7: function calling function 
int addition(int a, int b){
    return a + b;
}

int tripleaddition(){
    return 3 * (addition(2, 3));
}

// =================================================================
// EXERCISE FUNCTION DEFINITIONS
// =================================================================

// Function 1: Collects and validates an integer between 1 and 10
int getValidInput(){
    int input;
    do {
        cout << "Enter an integer between 1 and 10 inclusive: ";
        cin >> input;
    } while (input < 1 || input > 10);
    
    return input;
}

// Function 2: Prints numbers from 'start' up to 15
void printNumbersUpTo15(int start) {
    for (int i = start; i <= 15; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// Function 3: Counts numbers not divisible by 3 up to 15
int countNotMultiplesOfThree(int start) {
    int count = 0;
    for (int i = start; i <= 15; i++) {
        if (i % 3 != 0) {
            count++;
        }
    }
    return count;
}

// Function 4: Prompts the specific result output text
void displayResults(int startNum, int countResult) {
    cout << "From " << startNum << " up to 15, there are " 
         << countResult << " number/s that are not multiplied by 3." 
         << endl;
}