/* Destiny Hicks June 11, 2026 lab 15 : recursive function, built-function */ 
#include <iostream>
#include <cstdlib> // Required for rand()
#include <cmath>   // Required for pow()
using namespace std;

// Global constant variable for gravity
const float GRAVITY = 9.8;

using namespace std; 

void cheers(int n){ 
    if (n == 1){ 
        cout << (n * 2) << "\t" << "STOP" << endl; 
    } 
    else{ 
        cout << (n * 2) << "\t"; 
        cheers(n - 1); 
    } 
} 

int summation(int n){ 
    if (n != 0){ 
        return (summation(n - 1) + n); 
    } 
    else{ 
        return 0; 
    } 
} 

int getpositive(){ 
    int num; 
    cout << "Enter a number: "; 
    cin >> num; 
    if (num > 0){ 
        return num; 
    } 
    else{ 
        return getpositive(); 
    } 
} 

float hypotenuse(int side1, int side2){ 
    return sqrt(pow(side1, 2) + pow(side2, 2)); 
} 

void printresult(int side1, int side2, float hyp){ 
    cout << "The hypotenuse of a right triangle with sides " << side1 << " and " << side2 << " is: " << hyp << endl; 
} 

void randomnumber(){ 
    cout << rand() << endl; 
    cout << rand() << endl; 
    cout << rand() << endl; 
} 

int random_nag5_10(){ 
    return (-5 + rand() % 16); 
}


int generateRandomTime() {
    return rand() % 100 + 1;
}

// 2. Falling Distance Function
float calculateFallingDistance(int time) {
    // formula: 0.5 * gravity * time^2
    float distance = 0.5 * GRAVITY * pow(time, 2);
    return distance;
}

// 3. Output Function
void displayFallingResult(int time, float distance) {
    cout << "The falling distance in " << time 
         << " seconds is " << distance << " meters." << endl;
}