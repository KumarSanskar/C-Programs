#include<iostream>
using namespace std;
/*here we write a simple program to show the use of break statement during the execution of a loop
*here we have written a loop in which we iterate from 1 to 5, but 
*we have put a condition that as soon as it turns to be greater than or equal to 3 it should break or the loop should terminated
*/
int main(){
    for (int i = 1; i < 5; i++)
    {
    if(i >= 3)
        break;

    cout<<i<<"\n";
    }
return 0;        
}