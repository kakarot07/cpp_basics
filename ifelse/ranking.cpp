//Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.
#include<iostream>
using namespace std;

int main(){
  float chem,phy,math,total,per;
  cout<<"enter the markes obtained by the student in all the theree stream PCM \n";
  cout<<"-----------------------------------------------------------------------------\n";
  cout<<"markes obtained in maths: ";
  cin>>math;
  cout<<"markes obtained in physics: ";
  cin>>phy;
  cout<<"markes obtained in chemistry: ";
  cin>>chem;
  cout<<"-----------------------------------------------------------------------------\n";
  total=chem+phy+math;
  per=total/3.0;
  if (per<60)
  cout<<"second divison "<<per<<"%";
  else
  cout<<"first divison "<<per<<"%";
  return 0;

}
