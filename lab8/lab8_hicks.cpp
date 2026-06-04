/*
Destiny Hicks 
June 3, 2026
Lab 8: Temperature Converter 
*/

#include <iostream>
#include <iomanip> 

using namespace std;

// --- Conversion Functions ---
double celsiusToFahrenheit(double celsius) {
    return (1.8 * celsius) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * (5.0 / 9.0) + 273.15;
}

int main() {
    int choice = 0;
    double inputTemp = 0.0;
    double resultTemp = 0.0;

    // Display Menu
    cout << "Choose conversion type:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "4. Fahrenheit to Kelvin\n\n";
    
    cout << "Enter choice: ";
    cin >> choice;

    // Process Choice and Temperature Input
    cout << fixed << setprecision(1);

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> inputTemp;
        resultTemp = celsiusToFahrenheit(inputTemp);
        cout << inputTemp << "°C is " << resultTemp << "°F" << endl;
    } 
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> inputTemp;
        resultTemp = fahrenheitToCelsius(inputTemp);
        cout << inputTemp << "°F is " << resultTemp << "°C" << endl;
    } 
    else if (choice == 3) {
        cout << "Enter temperature in Celsius: ";
        cin >> inputTemp;
        resultTemp = celsiusToKelvin(inputTemp);
        cout << inputTemp << "°C is " << resultTemp << " K" << endl; // Kelvin doesn't use standard degree symbol
    } 
    else if (choice == 4) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> inputTemp;
        resultTemp = fahrenheitToKelvin(inputTemp);
        cout << inputTemp << "°F is " << resultTemp << " K" << endl;
    } 
    else {
        cout << "Invalid choice selected." << endl;
    }

    return 0;
}

// TASK 2: REVIEW AND UNDERSTAND
// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
//    - The functions and basic math operators are familiar, but using "<iomanip>" 
//      with "fixed" and "setprecision(1)" to limit decimal outputs was a newer structure 
//      that required carefully reviewing how the stream flags work.
//
// 2. Are there any issues or improvements you noticed? Explain.
//    - Yes. In the standard conversion formulas provided, integer division like (5/9) 
//      evaluates to 0 in C++. It must be written explicitly as floating-point logic 
//      (5.0 / 9.0) to keep accuracy. Also, error handling for an invalid menu choice 
//      needs an "else" block.
//
// 3. What methods did you use to test if the AI code was working as it should? Explain.
//    - I ran the program using known anchor constants: 0°C (should yield 32°F), 
//      100°C (boiling point, should yield 212°F), and 98.6°F (human body temp, should yield 37°C).