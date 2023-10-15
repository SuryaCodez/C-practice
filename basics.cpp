#include<iostream>
using namespace std;
int main()
{
  int x;
  int y;
  int res;
  cout<<"enter the first number:\n";
  cin>>x;
  cout<<"enter the second number:\n";
  cin>>y;
  res=2*x+y;
  cout<<"the result of the operation is:\n"<<res<<endl;
  if(res>9)
  {
    cout<<"\nresult is a two digit number";
  }
  else{
    cout<<"\nresult is a one digit number";
  }
  return 0;
}

