#include<iostream>
using namespace std;
int main(){
  int year;
  cout<<"enter a year : ";
  cin>>year;
  if(year%4==0){
    if(year%100==0){
      if(year%400==0)
      cout<<"its a leap year :"<<year;
      else
      cout<<"its not a leap year";
    }else
    cout<<"its a leap year:"<<year;
  }else
  cout<<"its not a leap year";
  return 0;
}
