#include<iostream>
using namespace std;
/* here we write a simpple program to show the use of continue statement
*here we have written a program that prints number fro 1 to 5, but
*when the value turn to be 3 it skips the current iteration and the control flows to the next expression, thus we see in output of
*the program that 3 is not printed while 4 and 5 get printed. 
*/
int main(){
    for (int i = 1; i <=5 ; i++)
    {
        if (i == 3)
        {
            continue;
        }
        
        cout<<i<<"\n";
    }
    
    return 0;
}