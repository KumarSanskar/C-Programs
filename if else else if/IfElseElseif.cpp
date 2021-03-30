#include<iostream>
using namespace std;
/* here we write a program to check whether a character is an uppercase, lowercase or any other character to understand the use of 
 *if else else if block using the ASCII values.
 * for digit ASCII is between 48 and 57
 * for uppercase letter ASCII is between 65 and 90
 * for lowercase letter ASCII is between 97 and 122 
*/

int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch >= 48 && ch <= 57){
        cout<<"You entered a digit";
    }
    else if(ch >= 65 && ch <= 90){
        cout<<"You enterd an upercase letter";
    }
    else if(ch >= 97 && ch <= 122){
        cout<<"You enterd a lowercase letter";
    }
    else{
        cout<<"You enterd a special character";
    }
    return 0;
} 
