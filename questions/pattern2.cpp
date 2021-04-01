// here we write a program to print a hollow rectangle pattern like
//******
//*    *
//*    *
//******
// we take input for the user about number of rows and columns.
// logic behind this pattern is that the * gets printed only when the row number is 1 or row number is the last row.
// and simillarly for the column the * is printed only when the column number is 1 or the last column number.

#include<iostream>
using namespace std;

int main(){
    int numberOfRows,numberOfColumns;   
    cout<<"Enter the number of rows: ";
    cin>>numberOfRows;
    cout<<"Enter number of columns: ";
    cin>>numberOfColumns;
    for (int i = 1; i <= numberOfRows; i++)
    {
        for (int j = 1; j <= numberOfColumns; j++)
        {
            if (i == 1 || i == numberOfRows)
            {
                cout<<"*";
            }
            else if (j == 1 || j == numberOfColumns)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }
    
    return 0;
}