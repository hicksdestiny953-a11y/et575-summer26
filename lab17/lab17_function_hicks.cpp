/*
Destiny Hicks 
June 17, 2026
lab 17 : array application
*/
#include <iostream>
#include <cstdlib>
using namespace std;

// example 1: search application
// function to populate an array 
// if a zero or negative is enterd, the collection will stop.
// numberuserindex stores the index of the last collected postive number 
void filluparray(int *arr, int &numberuserindex, int sizearray){
    int number , index = 0;
    do{
        cout<<"Enter a postive number :";
        cin>>number;
        if(number>0){
            arr[index] = number;
            index++;
        }
    }while(number>0 && index < sizearray);
    numberuserindex = index;
}
// function to print each element in the array
void printelements(int *arr, int numberuserindex){
    for(int i = 0; i<numberuserindex; i++){
       cout<<arr[i] <<"\t";
    }
    cout<<endl;
}
//function to search if a target number exists in an array
// the function returns the index of the found number
// if the target number doesn't exist in the array, the function returns -1
int search(int *arr, int &numberuserindex, int targetnumber){
    int index = 0;
    bool found = false;
    while(!found&&(index<<numberuserindex)){
        if(targetnumber == arr[index])
        found = true;
        else 
        index++;
    }
if(found)
return index;
else 
return -1;
}
// example 2: 2d array
void intro2darray(){
    // declare 2d array
    int graylevel[225][10];

    //delcaring 2d array with initial values 
    // 2 by -5 martix(2 rows and 5 columns)
    int temperature[2][5] = {
        {78, 56, 60},
        {100, 89, 92, 90, 80} // c++ replace missing intializers with 0
    };
    // accessing to vlue in a 2d array
    cout<<"The temperature in 1st row, 2nd column"<<temperature[0][1]<<endl;
}
   
// example 3: print each value in a 2d array
// the size off the column HAS to be passed in a 2d array
// int arr[][3] --> int (*arr)[3]

void printarray(int arr[][3], int rows){
    for(int r = 0; r<rows; r++){
        for(int c = 0; c<3; c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<endl;
    }
}
// example 4: 2d array application
// function to find and print the average of student's grade 
// 2d set-up : row ---> student, column --> subjects
// 2d array of 3 students and 4 subjects per student
void studentaverage(int(*arr)[4], int sizestudents, int sizesubjects , int *avg){
     int index = 0;
    for(int r =0; r<sizestudents; r++){
        int sum = 0;
      
        for(int c = 0; c<sizesubjects; c++){
            sum += arr[r][c];
        }
       // cout<<"Student"<<r+1<<"average grade ="<<(sum/sizesubjects)<<endl;
// save the average of each student in 1d array   
avg[index] = sum/sizesubjects;
index++;
}
}
// function to print the average of each student
void printavg(int*avg, int sizestudents){
    for(int i =0; i<sizestudents; i++){
        cout<<"Student"<<i+1<<"average grade = "<<avg[i]<<endl;
    }
}
// Lab exercise 

// Global constant for 2D array dimensions required by the lab
const int ARRAY_SIZE = 5;

// ==========================================================
// EXERCISE A: Finds and returns the minimum value in a 1D array
// ==========================================================
int findMin(const int arr[], int size) {
    int minVal = arr[0]; // Assume the first element is the smallest
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i]; // Update minVal if a smaller number is found
        }
    }
    return minVal;
}

// ==========================================================
// EXERCISE B: Populates a 5x5 2D array with random integers (1-255)
// ==========================================================
void populateArray2D(int arr[ARRAY_SIZE][ARRAY_SIZE]) {
    cout << "Generated 2D Array:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        for (int j = 0; j < ARRAY_SIZE; ++j) {
            // (rand() % 255) gives 0-254. Adding 1 shifts it to 1-255 inclusive.
            arr[i][j] = (rand() % 255) + 1; 
            cout << arr[i][j] << "\t"; // Prints the array as a grid
        }
        cout << endl;
    }
}

// ==========================================================
// EXERCISE B: Counts elements within the specified inclusive range
// ==========================================================
int range2D(const int arr[ARRAY_SIZE][ARRAY_SIZE], int minVal, int maxVal) {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        for (int j = 0; j < ARRAY_SIZE; ++j) {
            // Checks if the current element is inside the bounds (inclusive)
            if (arr[i][j] >= minVal && arr[i][j] <= maxVal) {
                count++;
            }
        }
    }
    return count;
}
