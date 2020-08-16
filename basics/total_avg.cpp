//Write a program in C++ to compute the total and average of four numbers.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  float a,b,c,d,avg,tot;
  cout<<"enter four numbers :";
  cin>>a>>b>>c>>d;
  tot=a+b+c+d;
  cout<<"total sum of numbers: "<<tot<<"\n";
  avg=(a+b+c+d)/4;
  cout<<"average of total number is: "<<avg;

  return 0;
}
