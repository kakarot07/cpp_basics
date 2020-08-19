//Write a C program to check whether an alphabet is a vowel or consonant.
#include<iostream>
using namespace std;
int main(){
  char a;
  cout<<"enter the alphabet : ";
  cin>>a;
  if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O' || a=='U'){
    cout<<"the alphabet is vowel "<<a<<"\n";
  }
  else if(a>='A'&& a<='Z' || a>='a'&&a<='z'){
    cout<<"the alphabet is constant"<<a<<"\n";
  }
  else
  cout<<"it is not an alphabet";
}
