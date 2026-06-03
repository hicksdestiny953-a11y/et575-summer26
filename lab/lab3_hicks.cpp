/* 
Destiny Hicks 
June 1,2026
lab 3: numerical values
*/

#include <iostream>
using namespace std;

int main(){

    cout<<"\n ------ example 1: numerical variables - - - - -"<<endl;
    int number = 5.9;
    cout<<"The number is = "<<number<<endl;

    double number1 = 3.123456789;
    float number2 = 9.123456789;
    cout<<"The double data type = "<<number1<<endl;
    cout<<"The float data type = "<<number2<<endl;

    const float EXP = 2.718;
    cout <<"The value of EXP = "<<EXP<<endl;
        
    cout <<"\n - - - - example 2: constant variables - - - - - "<<endl;
    number = 23.65;
    cout<< "The updated number =" <<number<<endl;

    cout <<"The value of EXP = "<<EXP<<endl;

    cout <<"\n - - - - example 3: calculate the height of a falling object - - - - - "<<endl;

    const float GRAVITY = 9.8;
    float time = 0, height = 0;

    cout << "Enter the falling time: ";
    cin>>time;

    height = 0.5*GRAVITY*time*time;

    cout << "The height of a falling object at "<<time <<"is "<<height<<"meters."<<endl;

    cout <<"\n - - - - example 4: calculkate the circumference of a circle - - - - - "<<endl;

    const float PI = 3.14159;
    float circumference = 0, radius = 0; 
    
    cout << "Enter a radius ";
    cin>>radius;

    circumference = 2*radius*PI;

    cout<<"The circumfrence is = "<<circumference<<endl;

    cout<<"\n - - - - Exercise - - - - - - "<<endl;

    float area, volume; 

    cout << "Enter the radius of the circle and sphere: ";
    cin >> radius; 

    area = PI * radius * radius;
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    cout << fixed;
    cout.precision(1); 

    cout << "The area of the circle is " << area << endl;
    cout << "The volume of the sphere is " << volume << endl;

    return 0;
}


 