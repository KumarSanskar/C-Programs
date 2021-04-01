//here we write a program to print an inverted triangle where height of the triangle is given by the user
//it will be printed like this
// *****
// ****
// ***
// **
// *
// logic behind this pattern is that we keep decreasing the number of stars till we reach 1 and 
// the number of * corresponds to number of the row

#include<iostream>
using namespace std;
int main(){
    int heightOfTriangle;
    cout<<"Enter the height of the triangle: ";
    cin>>heightOfTriangle;
    for (int i = heightOfTriangle; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;

}