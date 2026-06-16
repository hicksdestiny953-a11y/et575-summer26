/*
Destiny Hicks 
june 10, 2026
lab 13: introdution to function
*/
#include<iostream>
using namespace std;


//example 1: void fuction 
//void fuction that doesnt return a value 

void printhi(){
    cout<<"Hello Function!"<<endl;
    return;
}

//example 2: void fuction with paramter
//function  that prints a name with message
void greeting(string username){
    cout<<"Good morninng"<<username<<endl;
}
//example 3: function that returns a value
int dbnumber(int n){
    return n*2;
}
//example 4: function that returns the area of a rectangle 
float arearectangle(int width,int length){
    return width * length;
    float n = 2*(width * length);
}
//example 5: fuction that checks if a is postive, negative, zero
string checknumber(int number){
    if(number>0)
    return "postive";
else if (number < 0)
return "neagtive";
else 
return "zero";

}
//example 6 : compostion of function 
int postivenumber(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    while(n<=0){
        cout<<"Error ! Enter a postive: ";
        cin>>n;

    }
    return n;
}
// function 2 that calcuates the area of a square
int areasquare(int side){
    return side * side;
}
//function 3 print result 
void printresult(int area){
    cout<<"The area of a square is "<<area<<endl;
    return;
}
// exmaple 7: function calliing function 
//funtion1: returns the sum of two numbers
int addition(int a, int b){
    return a + b;
}
//function 2: returns the triple of the sum of two numbers
int tripleaddition(){
    return 3*(addition(2,3));

}
//EXERCISE