
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int a,b,c;
 float s,area;
 cin>>a>>b>>c;
 s=float(a+b+c)/2;
 area=sqrt(s*(s-a)*(s-c)*(s-b));
 //cout<<area<<endl;
 if(area>0)
  cout<<"YES"<<endl;
 else  
  cout<<"NO"<<endl;
return 0;
}