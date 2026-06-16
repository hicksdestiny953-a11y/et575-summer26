/*
Destiny Hicks 
June 10, 2026
lab 13 : introduction to function
*/
#include <iostream>
#include "lab13_fuction_hicks.cpp"
using namespace std;

int main (){

    cout<<"\n  - - - - - - - - - - Example 1: void fuction"<<endl;
    printhi();
    printhi();
    printhi();

    cout<<"\n  - - - - - - - - - - Example 2: void function with arguments"<<endl;
    greeting("Peter");
    string user = "Annie";
    greeting(user);

    cout<<"\n  - - - - - - - - - - Example 3: function that returns a value - - - - - - - -"<<endl;
    int x = dbnumber(6);
    cout<<x<<endl;

    cout<<"\n  - - - - - - - - - - Example 4: function that returns the area of a rectangle - - - - "<<endl;
    float a = arearectangle(2,2);
    cout<<"Area rectangle = "<<a<<endl;

    cout<<"\n  - - - - - - - - - - Example 5: function with alternative return value - - - "<<endl;
    string r = checknumber(0);
    cout<<r<<endl;

    cout<<"\n  - - - - - - - - - - Example 6: compostion of function- - - "<<endl;
    int side = postivenumber();
    int asquare = areasquare(side);
    printresult(asquare);

    cout<<"\n  - - - - - - - - - - Example 7: function calling function- - - "<<endl;
    cout<<tripleaddition()<<endl; 

    cout<<"\n - - - - - - - - - - - - Exercise - - - - - - - - - - - - - - - - -"<<endl;

    // ---  EXERCISE ---

    // 1. Get the validated number from the user
    int userNumber = getValidInput();
    cout << endl;

    // 2. Print the sequence from that number up to 15
    cout << "Printing numbers from " << userNumber << " to 15:" << endl;
    printNumbersUpTo15(userNumber);
    cout << endl;

    // 3. Get the count of numbers not divisible by 3
    int finalCount = countNotMultiplesOfThree(userNumber);

    // 4. Display the required formatted output string
    displayResults(userNumber, finalCount);

    return 0;
}