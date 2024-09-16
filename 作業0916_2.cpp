#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
  char x[100];
  char y[100];
  int z;
  cout<<"輸入班級";
  cin>>x ;
  cout<<"輸入姓名";
  cin>>y ;
  cout<<"輸入學號";
  cin>>z ;
  cout<<"班級:"<<x<<"姓名:"<<y<<"學號:"<<z;
  system("pause");
  return 0;
  }