#include<iostream>
using namespace std;
/* here we show the use of for loop, by printing the sum of n natural numbers.
 *in this we take a sum variable, intialised with value 0
 *and take a input from user till where he requires the sum
 * then with each iteration we add that number to the sum variable
 */   
int main(){
    int num;
    int sum = 0;
    cout<<"How many natural numbers? : ";
    cin>>num;
    for (int i = 1; i <= num ; i++)
    {
        sum = sum + i;
    }
    cout<<"The sum of first "<<num<<" is "<<sum;
    return 0;
}
