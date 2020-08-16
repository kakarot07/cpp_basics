// Write a program in C++ to find the third angle of a triangle.
#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"enter the two angles: ";
  cin>>a>>b;
  int c = 180-(a+b);
  cout<<"the third angle is :"<<c;

}
