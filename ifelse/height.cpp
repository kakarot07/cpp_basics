//Write a C program to accept the height of a person in centimeter and categorize the person according to their height.
#include<iostream>
using namespace std;
int main(){
  float a;
  cout<<"enter your height :";
  cin>>a;
  if (a<=150)
    cout<<"dwarf";
    else if (a>=151&&a<=160)
      cout<<"average";
      else if (a>160&&a<190)
        cout<<"tall";
else
  cout<<"abnormal";
}
