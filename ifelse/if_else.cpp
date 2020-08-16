#include<iostram>
using namespace std;
int main()
{
  int a;
  cout<<"enter a number:";
  std::cin >>a;
  if(a>0)
  {
    cout<<"u enterd a positive"<<a;
    }
    else if(a<0)
    {
      cout<<"you enterd negative no."<<a;

    }
    else
    {
      cout<<" you enterd 0";

    }
    return 0;

}
