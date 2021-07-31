#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    a=n%5;
    b=n%11;
    if(a==0 && b==0)
    {
        cout<<"BOTH"<<endl;
    }
    
    else if(a==0 || b==0)
    {
        cout<<"ONE"<<endl;
    }
    else
    {
        cout<<"NONE"<<endl;
    }
    return 0;
}
