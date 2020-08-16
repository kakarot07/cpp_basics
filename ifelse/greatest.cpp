// Write a C program to find the largest of three numbers.
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"enter three numbers to find the largest :";
  cin>>a>>b>>c;
  if(a>b&&a>c)
    cout<<a<<" is lagest";
    else if(b>c&&b>a)
    cout<<b<<" is largest ";
    else
    cout<<c<<" is largest";


}
