#include<iostream>
using namespace std;

// here we use write a simple program to compare two numbers using if-else block

int main(){
     int firstNumber, secondNumber;
     cout<<"Enter first number: \n";
     cin>>firstNumber;
     cout<<"Enter second number: \n";
     cin>>secondNumber;
     if(firstNumber>secondNumber){
         cout<<"First number is greater.\n";
     }else{
         cout<<"Second number is greater.\n";
     }
    return 0;
}