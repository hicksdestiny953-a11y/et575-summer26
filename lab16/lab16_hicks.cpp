/*
Destiny Hicks 
June 16,2026
lab 16, intro array 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "lab16_function_hicks.cpp"
using namespace std;

int main(){

// exercise a
int* ptr;       // Declare integer pointer (uninitialized)
int var = 7;    // Initialize var with 7
int foo = 21;   // Initialize foo with 21
ptr = &var;     // Point ptr to var's memory address
ptr = &foo;     // Point ptr to foo's memory address instead
int& ref = var; // Create reference (alias) for var


cout<<"\n - - - - - - example 1: intro to pointer - - - - - - - - - "<<endl;
intropointer();


cout<<"\n - - - - - - example 2: checking different data - - - - - - - - - "<<endl;
   string something = "Hello World!";
   a(something);
   cout<<something<<endl;
   b(something);
   cout<<something<<endl;
   c(&something);

   cout<<"\n - - - - - - example 3: checking different data - - - - - - - - - "<<endl;

   introarray();

   cout<<"\n - - - - -  example 4: print each element in a array - - - - - "<<endl;

  const int s = 4;
   int age[s]={18,21};

   printelements(s, age);
updatearray(s, age);
printelements(s, age);

int c = countadult(s,age);
cout<<"Adult 21 + = "<<c<<endl;

// Exercise B
const int SIZE = 10;
    int numbers[SIZE];

    // Seed the random number generator once
    srand(static_cast<unsigned int>(time(0)));

    // 1. Call the function to fill the array
    fillArray(numbers, SIZE);

    // Print the array to verify the numbers generated
    std::cout << "Generated Array: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // 2. Call the function to count even numbers
    int evenCount = countEvenNumbers(numbers, SIZE);
    std::cout << "Number of even numbers: " << evenCount << std::endl;

return 0;
}