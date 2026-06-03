/* 
Destiny Hicks 
 June 1, 2026 
 lab 4: numerical operators 
 */  
#include <iostream>  
using namespace std;  

int main(){  
    cout <<"\n - - - - - Example 1: assignment operators - - - - - "<<endl; 
    int n = 9, m = 2; 
    cout<<"n ="<<n<<endl;  
    n++; 
    cout<<"updated n ="<<n<<endl;  
    m --; 
    cout<<"updated m = "<<m<<endl;  
    n += m; 
    cout<<"updated n = "<<n<<endl;  
    m *=3; 
    cout<<"updated m ="<<m<<endl;  
    cout<< "Modulus, Remainder ="<<n%m<<endl;  
    cout<<"n ="<<n<<endl; 
    n %= m; 
    cout<<"n = "<<n<<endl;   
    
    cout <<"\n - - - - - Example 2: comparsion operators - - - - - "<<endl; 
    cout <<"n = "<<n<<endl; 
    cout<<"m ="<<m<<endl; 
    cout<<"Are n and m equal? "<<(n==m)<<endl; 
    cout<<"Is n is not equal to m?"<<(n != m)<<endl; 
    cout<<"Is m greater than or equal to n?"<<(m >= n)<<endl;   
    
    cout <<"\n - - - - - Example 3: logical/boolean operators - - - - - "<<endl;  
    bool check1 = m< n; 
    bool check2 = n<= m; 
    bool check3 = m != n;  
    cout<<"check1 ="<<check1<<endl; 
    cout<<"check2 ="<<check2<<endl; 
    cout<<"check3 ="<<check3<<endl;  
    bool result1 = check1 && check2 && check3; 
    bool result2= check1 || check2 || check3; 
    bool result3 = ! check2;  
    cout<<"result 1 ="<<result1<<endl; 
    cout<<"result 2 ="<<result2<<endl; 
    cout<<"result 3 ="<<result3<<endl;  
    
    cout << "\n---- EXERCISE ----" << endl;  
    int number; 
    char character;  
    int remainder; 
    bool exerciseresult3, result4, result5;  
    
    cout << "Enter an integer: "; 
    cin >> number;  
    cout << "Enter a character: "; 
    cin >> character;  
    
    number *= 3;  
    cout << "Triple the number\t" << number << endl;  
    
    remainder = character; 
    remainder %= 60;  
    cout << "Remainder of character\t" << remainder << endl;  
    
    // Compares the integer 'number' against the ASCII integer code of 'character'
    exerciseresult3 = (number <= character);  
    cout << "Is number less than or equal to character?\t" << exerciseresult3 << endl;  
    
    // FIXED: Changed 5 to '5' to check for the text character 5
    result4 = (number <= -1 || character != '5');  
    cout << "Result after comparison\t" << result4 << endl;  
    
    // FIXED: Changed to check if the text character is between '0' and '2'
    result5 = (character >= '0' && character <= '2');  
    cout << "Is character value between 0 and 2?\t" << result5 << endl;  
    
    return 0;  
}
