#include<iostream>
using namespace std;
/*here we write a simple program to demonstrate use of while loop
*here we keep taking input from the user and displaying it
*until the number input is negative.
*/
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    while (num >0)
    {
        cout<<"you entered: "<<num<<"\n"<<"Enter a number: ";
        cin>>num;
    
    }
    cout<<"You entered a negative value: "<<num;


    return 0;
}