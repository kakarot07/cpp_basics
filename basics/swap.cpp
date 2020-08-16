//Write a program in C++ to swap two numbers.
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"swap two numbers \n";
  cout<<"-------------------------- \n";
  cout<<"enter 1ist number";
  cin>>a;
  cout<<"enter 2nd number";
  cin>>b;
  c=b;
  b=a;
  a=c;
  cout<<"after swaping 1st number is"<<a<<"\n";
  cout<<"after swaping 2nd number is"<<b<<"\n";
  return 0;
}
