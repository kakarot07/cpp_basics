//Write a program in C++ to convert temperature in Celsius to Fahrenheit.
#include<iostream>
using namespace std;

int main(){
    float cel,fah;
    cout<<"enter temperature in Celsius \n";
    cin>>cel;
    fah = (cel * 9.0) / 5.0 + 32;
    cout<<"temperature in Fahrenheit is: "<<fah;

  return 0;
}
