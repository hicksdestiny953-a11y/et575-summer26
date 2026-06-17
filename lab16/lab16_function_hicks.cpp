/*
Destiny Hicks 
June 16,2026
lab 16, intro array 
*/
#include <iostream>

using namespace std;
// exercise a

//example 1: intro to pointer
void intropointer(){
    // declare variable
    int num = 12;
    char sym = '#';
    string n = "Peter";

    // declare pointer without initial variable
    int* ptrint;
    char* ptrchar;
    string* ptrstring = &n;

    // check a pointer info
    cout<<ptrint<<endl;

    // initialize a pointer with a loctaion of a variable 
    ptrint = &num;
    ptrchar = &sym;

//check pointer info
cout<<ptrint<<endl;
cout<<ptrchar<<endl;
cout<<ptrstring<<endl;


// get the value of a pointed variable
cout<<*ptrint<<endl;
cout<<*ptrchar<<endl;
cout<<*ptrstring<<endl;

}
// example 2 
void a(string v){
    cout<<"A = "<<v<<endl;
    v = "updated A";
}
void b(string& v){
    cout<<"B= "<<v<<endl;
    v = "updated B";
}
void c(string* v){
    cout<<"C = "<<v<<endl;
}
// example 3 
void introarray(){
    //decalare an array 
    int scores[3];

    // use squared brackets [] to access to each element in the array 
    // each element is organized by the index number starting from zero (left- most)
    cout<<scores<<endl;
    cout<<"first element = "<<scores[0]<<endl;

    // assign values to each element in an array 
    scores[0] = 50;
    scores[1] = 80;
    scores[2] = 88;


    cout<<"first element = "<<scores[0]<<endl;
    
    //initializing an array 

    char symbols[5] = {'$', '#', '@', '|', 'G'};
    cout<<"3rd symbol = "<<symbols[2]<<endl;

    // the size of an array in a square brackets [], can be ignored if the array has intitial values

    string names[]={"Peter", "Annie"};
    cout<<"2nd name "<<names[1]<<endl;


    // loop through each element in an array symbol
    for(int i = 0; i<5 ; i++){
        cout<<symbols[i]<<endl;
    }

    // use loop to find the avearge of scores array 
    float avgscore = 0, sumscores = 0;
    for(int i = 0; i<3 ; i++){
        sumscores += scores[i];
    }
    avgscore = sumscores/3.0;
    cout<<"The average score is = "<<avgscore<<endl;
}
// example 4: Passing an array into a function 
// an array can be declared as parameter using [] bracket ---> int arrayname[]
//or you can pass rhe array into pointer ---> int * arrayname 
// for example, we are going 
void printelements(int sizearray, int arr[]){
    for(int i = 0; i <sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void updatearray(int sizearray, int arr[]){
    int a;
    for(int i = 0; i <sizearray; i++){
        cout<<"Enter an age: ";
        cin>>a;
        arr[i]= a;
    }
}
// function to find hoow many adult ages in array age
// the function will return the count 
int countadult(int sizearray, int *arr){
    int counter = 0;
    for(int i = 0; i<sizearray; i++){
        if(arr[i] >= 21)
        counter ++;
    }
    return counter;
}
/**
 * Fills an array with random integers between 1 and 9 inclusive.
 */
void fillArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 9) + 1; 
    }
}

/**
 * Counts and returns the number of even numbers in the array.
 */
int countEvenNumbers(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}