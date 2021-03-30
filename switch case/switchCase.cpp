#include<iostream>
using namespace std;
// here we make a program to demonstrate the use of switch case statements, for user input of the day number we display the corresponding day name 

int main(){
    int dayNumber;
    cout<<"Enter the number of week's day(1-7): ";
    cin>>dayNumber; 
    cout<<"\n";
    switch(dayNumber){
        case 1:
        cout<<"The day is Monday.";
        break;
        case 2:
        cout<<"The day is Tuesday.";
        break;
        case 3:
        cout<<"The day is Wednesday.";
        break;
        case 4:
        cout<<"The day is Thursday.";
        break;
        case 5:
        cout<<"The day is Friday.";
        break;
        case 6:
        cout<<"The day is Saturday.";
        break;
        case 7:
        cout<<"The day is Sunday.";
        break;
        default:
        cout<<"Sorry wrong input.";
    }
    return 0;
}