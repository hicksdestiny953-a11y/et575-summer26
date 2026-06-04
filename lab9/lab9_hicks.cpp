/*
Destiny Hicks 
June 4, 2026
lab 9: switch-case statement
*/

#include <iostream>
using namespace std;
int main(){

    cout<<"\n - - - - - Example 1: switch-case statement"<<endl;

    int dayoff=0;

    cout<<"Select a day-off:"<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;

    cin>>dayoff;
    switch (dayoff)
    {
        case 1:
        cout<<"You are off Monday"<<endl;
        break;
          case 2:
        cout<<"You are off Tuesday"<<endl;
        break;
          case 3:
        cout<<"You are off Wednesday"<<endl;
        break;
          case 4:
        cout<<"You are off Thursday"<<endl;
        break;
          case 5:
        cout<<"You are off Friday"<<endl;
        break;
        default:
        cout<<"Wrong dayoff"<<endl;
        break;
    }
cout<<"\n - - - - - Example 1: switch-case statement"<<endl;
char gender;
string selectedgender="";

cout<<"Select a gender";
cout<<"m for male"<<endl;
cout<<"f for female"<<endl;
cout<<"o for other"<<endl;
cin>>gender;

switch(gender)
{
    case 'm': case 'M':
    selectedgender = "MALE";
    break;
    case 'f': case 'F':
    selectedgender = "FEMALE";
    break;
    case 'o': case 'O':
    selectedgender = "OTHER";
    break;
    default:
    selectedgender ="UNKNOWN";
    break;
}
cout<<"Selected gender ="<<selectedgender<<endl;



cout<<"\n - - - - -EXERCISE - - - - - - - "<<endl;

double number = 0.0;
    char choice = ' ';

   
    cout << "Enter a number: ";
    cin >> number;

    
    cout << "Do you want to double the number? (Y/N): ";
    cin >> choice;

    switch (choice) {
        
        case 'Y':
        case 'y':
            number *= 2; 
            break;

        
        case 'N':
        case 'n':
            break;

    
        default:
            number = 0;
            break;
    }





return 0;

}


  
