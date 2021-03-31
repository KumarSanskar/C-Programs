#include <iostream>
using namespace std;
// here we have written a simple program to demonstrate the use of ternary opertor 
// in this we ask for the age, if the age is greater tha or  equal to 18 the person is allowed to cast vote. 
int main() {
  int age;
  string result;
  cout << "Enter your age: ";
  cin >> age;
  result = (age >= 18) ? "Allowed" : "Not allowed";
  cout << "You are " << result << " to cast vote.";
  return 0;
}