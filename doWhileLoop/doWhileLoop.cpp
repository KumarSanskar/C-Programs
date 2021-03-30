#include<iostream>
using namespace std;
/* here we make a simple program to deonstrate the use of do while loop
*here we take input from the user until a negative number is encounterd or input by the  user
* do while loop is different from the  while loop in fact that it in do while loop the condition is checked at the end 
* whereas in the case of  while loop it is checked at the begining, thus do while loop is also known as exit control loop
* and will atleast run one time. 
*/
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    do
    {
        cout<<"Entered number is: "<<num<<"\nEnter a number again: ";
        cin>>num;
    } while (num > 0);
    cout<<"You entered a negative number"<<num;

    return 0;
}