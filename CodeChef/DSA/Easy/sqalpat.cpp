#include <iostream>
using namespace std;

int main() {
	int n,a;
	cin>>n;
	for(int i=1;i<=5*n;i++)
	{
	    cout<<i<<" ";
	    a=i;
	    if(i%5==0)
	    {
	        cout<<endl;
	        i=i+5;
	        for(int j=i;j>a;j--)
	        {
	            cout<<j<<" ";
	        }
	        cout<<endl;
	        
	       
	    }
	    
	}
	
	return 0;
}
