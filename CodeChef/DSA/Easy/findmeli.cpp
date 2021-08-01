#include <iostream>
using namespace std;

int main() 
{
    int n,k,f=0,j;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        if(j==k)
        {
            f=1;
            break;
            
        }
        
    }
    if(f==1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    
	
	return 0;
}
