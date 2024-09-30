#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
  float x,y;
  cout<<"輸入本金";
  cin>>x ;
  cout<<"輸入儲存年分";
  cin>>y ;
  cout << "值為:" << pow(x,y) << endl ;
  system("pause");
  return 0;
}