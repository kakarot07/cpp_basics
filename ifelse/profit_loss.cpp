//Write a C program to calculate profit and loss on a transaction..
#include<iostream>
using namespace std;
int main(){
  float s,c,i;
  cout<<"enter the selling price : ";
  cin>>s;
  cout<<"enter the cost price :";
  cin>>c;
  if(s>c){
    i=s-c;
    cout<<"you booked profit \n";
  }
  else if(c>s){
    i=c-s;
    cout<<"you booked loss \n";
  }
  else
  cout<<"no profit no loss";
  return 0;
  }
