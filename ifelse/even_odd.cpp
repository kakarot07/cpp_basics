//Write a C program to check whether a given number is even or odd.
#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"enter a number to find if it is even or odd : ";
  cin>>a;
  if(a%2==0)
    cout<<"its an even number : "<<a;
  else
    cout<<"its an odd number : "<<a;
}
