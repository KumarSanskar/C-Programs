#include<iostream>
using namespace std;

/* here we have written asimple program to showcase how to use a functions in a program
*here we  get an input from the user and then we call the function cube and pass the value of input to that function
*inside the fuction cube we define the parameter list with an input and within the function we perform 
the calculation to obtain cube of the input number
now the cube function can be called as many times as required.
*/

int main(){
    int cube(int);  //function prototype

    int num, result;
    cout<<"Enter a number: ";
    cin>>num;
    result = cube(num);

    cout<<"\nThe cube of "<<num<<" is "<<result;
    return 0;
}

int cube(int input){
    int res;
   res = input*input*input;
    return (res);
}