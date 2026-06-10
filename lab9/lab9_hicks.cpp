/* destiny hicks june 4, 2026 lab 9: switch-case statement */ 
#include <iostream> 
#include <string> // REQUIRED FOR STRING VARIABLES
using namespace std; 

int main(){ 
    cout<<"\n - - - - - example 1: switch-case statement"<<endl; 
    int dayoff=0; 
    cout<<"select a day-off:"<<endl; 
    cout<<"1 for monday"<<endl; 
    cout<<"2 for tuesday"<<endl; 
    cout<<"3 for wednesday"<<endl; 
    cout<<"4 for thursday"<<endl; 
    cout<<"5 for friday"<<endl; 
    cin>>dayoff; 
    
    switch (dayoff) { 
        case 1: cout<<"you are off monday"<<endl; break; 
        case 2: cout<<"you are off tuesday"<<endl; break; 
        case 3: cout<<"you are off wednesday"<<endl; break; 
        case 4: cout<<"you are off thursday"<<endl; break; 
        case 5: cout<<"you are off friday"<<endl; break; 
        default: cout<<"wrong dayoff"<<endl; break; 
    } 
    
    cout<<"\n - - - - - example 2: select a gender"<<endl; 
    char gender; 
    string selectedgender=""; 
    cout<<"select a gender\n"; 
    cout<<"m for male"<<endl; 
    cout<<"f for female"<<endl; 
    cout<<"o for other"<<endl; 
    cin>>gender; 
    
    switch(gender) { 
        case 'm': 
        case 'M': 
            selectedgender = "male"; 
            break; 
        case 'f': 
        case 'F': 
            selectedgender = "female"; 
            break; 
        case 'o': 
        case 'O': 
            selectedgender = "other"; 
            break; 
        default: 
            selectedgender ="unknown"; 
            break; 
    } 
    cout<<"selected gender ="<<selectedgender<<endl; 
    
       cout<<"\n - - - - -exercise - - - - - - - "<<endl; 
    double number = 0.0; 
    char choice = ' '; 
    
    
    cin.clear();
    cin.ignore(100, '\n');

    cout << "enter a number: "; 
    cin >> number; 
    
    cout << "do you want to double the number? (y/n): "; 
    cin >> choice; 
    
    switch (choice) { 
        case 'y': 
        case 'Y': 
            number *= 2; 
            cout << "The doubled number is: " << number << endl; 
            break; 
        case 'n': 
        case 'N': 
            cout << "The number remains: " << number << endl; 
            break; 
        default: 
            number = 0; 
            cout << "Invalid choice. Number reset to: " << number << endl; 
            break; 
    } 

    return 0; 
}
