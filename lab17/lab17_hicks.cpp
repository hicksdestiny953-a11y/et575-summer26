/*
Destiny Hicks 
June 17, 2026
lab 17 : array application

*/

#include <iostream>
#include <ctime>
#include "lab17_function_hicks.cpp"
using namespace std;
int main(){
    //declare size of the array
    const int sizea = 10;
    // declare the array
    int a [sizea]= {0};
    //delcare the variable to saver the index of the last postive number
    int listsize;
// delcare thre target number
int targetnumber = 10;
    // calling function
    filluparray(a, listsize, sizea);
    printelements(a, listsize);
    int foundindex = search(a, listsize, targetnumber);
    cout<<"Index of found number : "<<foundindex<<endl;

cout<<"\n - - - - - - - Example 2: 2d array "<<endl;
intro2darray();
    
cout<<"\n - - - - - - - Example 3: print 2d array elements "<<endl;
const int rowsize = 2;
int n [rowsize][3]={
    {1,2,3},
    {4,5,6}
};
printarray(n,rowsize);

cout<<"\n - - - - - - - Example 4: 2d array elements "<<endl;
    const int students = 3;
    const int subjects = 4;
    int grades[students][subjects] ={
        {85,90,78,92},
        {70,88,84,76},
        {95,91,89,93}

    };
    int studentavg[students];
    studentaverage(grades, students, subjects, studentavg);
    printavg(studentavg, students);



// Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // --- Exercise A Testing ---
    cout << "--- Exercise A ---" << endl;
    int testSize = 6;
    int arr[] = {34, 12, 5, 78, 2, 55};
    
    // Call function 'findMin'
    int minNumber = findMin(arr, testSize);
    cout << "The minimum number is " << minNumber << endl;

    // --- Exercise B Testing ---
    cout << "\n--- Exercise B ---" << endl;
    int arrayNumber2D[ARRAY_SIZE][ARRAY_SIZE] = {0};
    int max = 200;
    int min = 150;

    /* Call function 'populateArray2D' to fill the array with random numbers between 1 and 255 */
    populateArray2D(arrayNumber2D);

    /* Call function to count the numbers in the array that are between min and max */
    int totalNumber = range2D(arrayNumber2D, min, max);
    
    cout << "\nArray has " << totalNumber << " number(s) between " << min << " and " << max << endl;




    return 0;
}