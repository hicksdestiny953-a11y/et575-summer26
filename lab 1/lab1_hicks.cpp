/*
Destiny Hicks 
5/28/2026
lab 1: iostream
*/


#include<iostream>
using namespace std;
int main(){
    cout<<"\n ------- Example 1: cout object ----------" << endl;

    cout<<"Hello World!\n"<<endl;
    cout<<"ET 575 \t\t Destiny Hicks"<<endl;
    cout<<"\n------ Example 2: declaring string and character variables -----"<<endl;

    /*
    1) variables are only declared once
    2) naming variables:
    - can't start with a number 
    - can't have space in between
    - can't have any symbol except the _
    - can't use C++ reserve keywords, example 'cout'
    3) a variable name in known as 'identifier'
    
    */
   string username;
   username = "PeterPan";
   cout<<"U = "<<username<<endl;
   cout<<"Enter another username: ";
   cin>>username;
   cout<<"Updated username: "<<username<<endl;

cout<<"\n------ Example 3: declaring charactervariable-----"<<endl;
char symbol = '%';
cout<<"Character = "<<symbol<<endl;

symbol = 64;
cout<<"Updated Character = "<<symbol<<endl;

//initialize a value for an identifier
char s(35);
cout<<"Symbol = "<<s<<endl;

cout<<"\n-------EXERCISE -----------"<<endl;
string country;
char gender;

  cout << "Enter a country: ";
    cin >> country;

    cout << "Enter a gender (f for female, m for male, o for others): ";
    cin >> gender;

    
    cout << "\nEntered country:\t" << country << endl;
    cout << "Selected gender:\t" << gender << endl;




    return 0;


}