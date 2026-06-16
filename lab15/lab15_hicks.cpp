/* Destiny Hicks June 11, 2026 lab 15 : recursive function, built-function */ 
#include <iostream> 
#include <ctime> 
#include "lab15_function_hicks.cpp" 

using namespace std; 

int main (){ 
    cout << "\n - - - - - - - - - - Example 1: recursive function- - - - - - - - - " << endl; 
    cheers(3); 
    
    cout << "\n - - - - - - - - - - Example 2: summation recursive function - - - - - - - - - " << endl; 
    int s = summation(5); 
    cout << s << endl; 
    
    cout << "\n - - - - - - - - - - Example 3: summation recursive function- - - - - - - - - " << endl; 
    int n = getpositive(); 
    cout << "collected number: " << n << endl; 
    
    cout << "\n - - - - - - - - - - Example 4: built-in function- - - - - - - - - - " << endl; 
    int s1 = getpositive(); 
    int s2 = getpositive(); 
    float h = hypotenuse(s1, s2); 
    printresult(s1, s2, h); 
    
    cout << "\n - - - - - - - - - Example 5: random function- - - - - - - - - " << endl; 
    srand (time(0)); 
    randomnumber(); 
    cout<<endl; 
    randomnumber(); 
    
    cout<<"\n - -- -- - - - example 6 : range of random fuction - -- ----------------- "<<endl; 
    int r = random_nag5_10(); 
    cout<<r<<endl; 
    
srand(time(0)); 

    cout << "\n - - - - - - - - - - - - Exercise A - - - - - - - - - - - - - - - - -" << endl;

    // Step 1: Generate the random time
    int timeSeconds = generateRandomTime();

    // Step 2: Calculate the distance using that time
    float totalDistance = calculateFallingDistance(timeSeconds);

    // Step 3: Display the formatted final result
    displayFallingResult(timeSeconds, totalDistance);
    
    return 0; 
}
