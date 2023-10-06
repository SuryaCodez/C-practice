#include<iostream>
using namespace std;
inline float lar(float a,float b,float c)
{
    return((a>b&&a>c)?a:b>c?b:c);
}
int main()
{
    float x,y,z;
    cout<<"enter the 3 numbers";
    cin>>x>>y>>z;
    cout<<"the largest number is:"<<lar(x,y,z);
    return 0;
}
