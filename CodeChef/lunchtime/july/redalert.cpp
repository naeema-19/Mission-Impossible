#include <iostream>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,h;
        cin>>n>>d>>h;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int s=0,f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                s=s+a[i];
            }
            else if(a[i]==0)
            {
                if(s<d)
                {
                    s=0;
                }
                else 
                {
                    s-=d;
                }
            }
            if(s>h)
        {
            f=1;
        }
           
        }
        
        if(f>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}

