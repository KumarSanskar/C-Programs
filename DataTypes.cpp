#include<iostream>
using namespace std;
int main()
{
    //here I am declaring as well initialising variables of various primitive datatypes:

    int age_of_student = 18;
    float aggregate_percentage = 85.56;
    char grade_on_percentage = 'B';
    bool status = true;    
    // 1 => True & 0 => False; even though i provide the variable with value "true" it shows "1" which is compiler defined.

    //here I am printing the data stored in different variables.

    //endl is like '/n' i.e. it inserts new line character .
    cout<<"Printing variables with their values:- "<<endl;
    cout<< "age_of_student: "<< age_of_student <<endl;   
    cout<< "aggregate_percentage: "<< aggregate_percentage <<endl;
    cout<< "grade_on_percentage: "<< grade_on_percentage <<endl;
    cout<< "status: "<< status <<endl;

    //using the sizeof() function we find the size of datatype in bytes.
    cout<<""<<endl;
    cout<<"Printing the size of datatypes:- "<<endl;
    cout<< "size of integer: " <<sizeof(int) <<endl;
    cout<< "size of float: " <<sizeof(float) <<endl;
    cout<< "size of character: " <<sizeof(char) <<endl;
    cout<< "size of boolean: " <<sizeof(bool) <<endl;

    return 0;

}