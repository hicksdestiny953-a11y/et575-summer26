/*
Destiny Hicks
lab 10, loop mechanims
June 9, 2026

*/
#include <iostream>
using namespace std;
int main(){
    cout<<"\n - - - - - - Example 1: for loop as counter" <<endl;
    int x = 3;
    
    for(int x = 1; x <=5; x++){
        cout<<"Hello "<<x<<endl;
    }
    
    
    cout<<"End of loop. Value of x = " <<endl; 

     cout<<"\n - - - - - - Example 2: for loop as a counter with different steps" <<endl;
     for(int x = 1; x<=9 ; x+=2){
        cout<<x<<"\t";

      
        cout<<"\n - - - - - - Example 3: for loop as a decrement counter with different steps" <<endl;

        for(int x = 10; x >= -10; x-=3  ){
            cout<<x<<"\t";
        }
     }
cout<<endl;

 cout << "\n - - - - - - Example 4: for loop with conditional statement" <<endl;

    
    int counter = 0; 
    int sumpostive = 0;

    for(int x = -20; x <= 20; x += 4) {
        cout << x << "\t";
        
        if(x % 5 == 0 && x != 0) {
            counter++;
        }
    }if (x>0) sumpostive += x;
    
   
    cout << endl << "Numbers that are multiples of 5 = " << counter << endl;
    cout <<"sum of all postive numbers ="<<sumpostive<<endl;



 cout << "\n - - - - - - Example 5: while loop as a counter"<<endl;
    int n = 1;
    while(n<=5){
        cout<<n<<"\t";
        n++;
    }


n = 1;
while(n <=5){
    cout<<n<<"\t";
    n++;
}
cout<<endl;
n =1;
while(n++ <=5){
    cout<<n<<"\t";
}

n =1;
while(++n <=5){
    cout<<n<<"\t";
}







cout << "\n - - - - - - Example 6: while loop as a counter"<<endl;
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;


    while(!(number>=1 && number <=9)){
        cout<<"Enter a new number between 1 and 9";
        cin>>number;
    }
    cout<<"Collected number = "<<number<<endl;




    cout << "\n - - - - - - EXERCISE 1 - - - - - - - - -"<<endl;
    int sum = 0, count = 0;
    
    for (int n = 20; n > 0; n -= 2) {
        if (n % 3 == 0) {
            count++;
            continue; 
        }
        sum += n;
    }
    
   
    cout << "The sum is: " << sum << endl;
    cout << "The count is: " << count << endl;
    
    cout << endl;

    
   int i = 0, add = 0;
    
    while (i <= 10) {
        i++;
        if (i < 5 && i != 2) {   
            cout << "i = " << i << endl;
        }
        else {
            continue; 
        }
        add += i;
    }
    
    
    cout << "Add = " << add << endl;

      return 0;
}



