/*
Destiny Hicks 
June 3,2024
Lab 7: Control Flow
*/
#include <iostream>
using namespace std;
int main() {

    cout << "\n - - - - - - Example 1: bool variables - - - - - - " << endl;
    int n;
    bool checkpostive;

    cout<<"Enter a number: ";
    cin>>n;

    checkpostive = n > 0;
    cout<<"Is the number"<<n<<" positive? "<<checkpostive<<endl;

    checkpostive = -5;

    cout<<"updated checkpostive = "<<checkpostive<<endl;

    cout << "\n - - - - - - Example 2: if statements - - - - - - " << endl;

    int c = 10;
    if(n==0){
        cout<<"n is zero !";

        c += 20;
    }
cout<<"\t value of c = "<<c<<endl;

    cout << "\n - - - - - - Example 3: if-else statements - - - - - - " << endl;

    if(n%2 == 0){
        cout<<"The number is even."<<endl;
    }
    else{
        cout<<"The number is odd."<<endl;
    }









































cout << "\n - - - - - - Example 7: nested statements - - - - - - " << endl;

if(n > 0){
    if(n % 2 == 0){
        cout<<"The number is positive and even."<<endl;
    }
    else{
        cout<<"The number is positive and odd."<<endl;
    }
    else if(n < 0){
        cout<<"The number is negative."<<endl;
    }
    else{
        cout<<"The number is zero."<<endl;
    }
    else








    return 0;
}