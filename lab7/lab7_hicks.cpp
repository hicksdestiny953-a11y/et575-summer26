/*
Destiny Hicks 
June 3,2024
Lab 7: Control Flow
*/
#include <iostream>
#include <string> // Added for string support
#include <iomanip>
using namespace std;

int main() {

    cout << "\n - - - - - - Example 1: bool variables - - - - - - " << endl;
    int n;
    bool checkpostive;

    cout << "Enter a number: ";
    cin >> n;

    checkpostive = n > 0;
    // Added spaces around the variable 'n' for clean output
    cout << "Is the number " << n << " positive? " << checkpostive << endl;

    checkpostive = -5; // Evaluates to true (1)
    cout << "updated checkpostive = " << checkpostive << endl;


    cout << "\n - - - - - - Example 2: if statements - - - - - - " << endl;
    int c = 10;
    if (n == 0) {
        cout << "n is zero !";
        c += 20;
    }
    cout << "\t value of c = " << c << endl;


    cout << "\n - - - - - - Example 3: if-else statements - - - - - - " << endl;
    if (n % 2 == 0) {
        cout << n << " is an EVEN number" << endl;
    }
    else {
        cout << n << " is an ODD number" << endl;
    }


    cout << "\n - - - - - Example 4: if-else statement" << endl;
    int wavelength = 0;
    string emittedlight = "";

    cout << "Enter a wavelength (nm) :";
    cin >> wavelength;

    if (wavelength < 379 && wavelength >= 10)       { emittedlight = "ULTRAVIOLET"; }
    else if (wavelength <= 520 && wavelength >= 380) { emittedlight = "BLUE"; }
    else if (wavelength <= 590 && wavelength >= 521) { emittedlight = "GREEN"; }
    else if (wavelength <= 740 && wavelength >= 591) { emittedlight = "RED"; }
    else if (wavelength >= 741)                      { emittedlight = "INFRARED"; }
    else                                             { emittedlight = "UNDEFINED"; }

    // Added spaces for better readability
    cout << wavelength << " nm emits " << emittedlight << " light" << endl;


    cout << "\n - - - - - Example 5: conditional operator" << endl;
    // Fixed operator precedence with parentheses
    cout << n << " " << ((n % 2 == 0) ? "is an EVEN number" : "is an ODD number") << endl;

        cout << "\n - - - - - Example 6: conditional operator" << endl;


        int max = 10;
        bool checkmax = false;

        if(n>max){checkmax = true;}
        else{checkmax = false;}
        cout<<"Is n greater than 10? ="<<checkmax<<endl;

        checkmax = n > max ? true : false;

        cout<<"Is greater than 10?"<<checkmax<<endl;

         cout << "\n - - - - - Example 7: nested conditional statement " << endl;

        /*
        if(n>0 && n%2 !=0){
            cout<<"postive and even number"<<endl;

         }
         else if (n>0 && n%2 !=0){
            cout<<"postive and odd number"<<endl;
         }
else if (n<0){
    cout<<"negative"<<endl;
}else{
    cout<<"zero"<<endl;
}
        */
       if(n>0){
        if (n%2 ==0)
       cout<<"postive and even number"<<endl;
else 
cout<<"postive and odd number"<<endl;


       }
       else if(n<0){
        cout<<"negative"<<endl;
       }
       else{
        cout<<"zero"<<endl;
       }

    cout<<"\n - - - - - - - - Lab Exercise - - - - - - - -"<<endl;
    float weight = 0.0;
    float shippingCost = 0.0;

    // Prompt the user to enter the weight
    cout << "Enter the weight of the package in pounds: ";
    cin >> weight;

    // Multiway if-else if structure to determine shipping cost
    if (weight <= 0) {
        shippingCost = 0.00;
    }
    else if (weight <= 2.0) {
        shippingCost = 5.00;
    }
    else if (weight <= 5.0) {
        shippingCost = 8.20;
    }
    else if (weight <= 10.0) {
        shippingCost = 10.25;
    }
    else {
        // This covers any weight strictly greater than 10 pounds
        shippingCost = 12.50;
    }

    // Configure cout to display exactly 2 decimal places for monetary values
    cout << fixed << setprecision(2);

    // Display the final required output
    cout << "A package of weight " << weight << " lbs costs $" << shippingCost << endl;

    return 0;
}