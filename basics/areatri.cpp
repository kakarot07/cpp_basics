//Write a program in C++ to find the area of any triangle using Heron's Formula.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  float s1,s2,s3,s,area;
  cout<<"length of side s1 : ";
  cin>>s1;
  cout<<"length of side s2 : ";
  cin>>s2;
  cout<<"length of side s3 : ";
  cin>>s3;
  s = (s1+s2+s3)/2;
  area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
  cout<<area;
  return 0;
}
