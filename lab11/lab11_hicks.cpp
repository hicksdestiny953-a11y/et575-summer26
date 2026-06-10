
/*
Destiny Hicks
June 9,2026
Lab 11, do-while loop, nested loop
*/


#include <iostream>
using namespace std;

int main() {
 
   
    cout << "- - - - - - Example 1: do-while - - - - - -" << endl;
    int num;
    char choice;

    do {
        cout << "Enter a number :";
        cin >> num;
        if (num % 2 == 0 && num != 0) {
            cout << "Even number" << endl;
        }
        else if (num == 0) {
            cout << "Number is zero" << endl;
        }
        else {
            cout << "Number is odd " << endl;
        }
        cout << "Do you want another run? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "End of the program" << endl;


   
    cout << "\n - - - - - - example 2: do-while loop- - - - - - - - -" << endl;
    int sumnumbers = 0;
    int n;
    
    while (true) { 
        cout << "Enter a positive number: ";
        cin >>n;

        if (n>0) {
            sumnumbers += n;
        }
        else { 
            break;
        }
    }
    cout << "End of while loop. Total sum = " << sumnumbers << endl;


   
    cout << "\n - - - - - - example 3: loop with a continue statement- - - - - - - - -" << endl;
    int sumall = 0;
    for (int m = 1; m <=9; m++) {
        cout <<m<< "\t";
        if (m == 5) {
            continue;
        }
        sumall += m;
    }
    cout << endl << "Total sum =" <<sumall << endl;


    
    cout << "\n - - - - - - example 4: loop with a continue statement- - - - - - - - -" << endl;
    int count = 0;
    int i = 10;

    while (i > 5) {
        i- -;
        if (i % 2 == 0) {
            count += i;
            continue;
        }
        count -= 3;
    }
    cout << "Final count is =" << count << endl;


    // - - - - - - Exercise 1 - - - - - - - -
    cout << "\n - - - - - - Exercise 1 - - - - - - - -" << endl;
    int sum = 0, countEx1 = 0; // Renamed local count to avoid confusion
    
    for (int nEx1 = 20; nEx1 > 0; nEx1 -= 2) {
        if (nEx1 % 3 == 0) {
            countEx1++;
            continue; 
        }
        sum += nEx1;
    }
    cout << "The sum is: " << sum << endl;
    cout << "The count is: " << countEx1 << endl;
    cout << endl; 


    // - - - - - - Exercise 2 - - - - - - - -
    cout << "--- Exercise 2 Output ---" << endl;
    
    int iEx2 = 0, add = 0; // Fixed: Changed variable 'i' to 'iEx2' to avoid redeclaration error
    
    while (iEx2 <= 10) {
        iEx2++;
        if (iEx2 < 5 && iEx2 != 2) {   
            cout << "i = " << iEx2 << endl;
        }
        else {
            continue; 
        }
        add += iEx2;
    }
    cout << "Add = " << add << endl;

    return 0;
}





































