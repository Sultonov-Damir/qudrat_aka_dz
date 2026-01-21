#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int b,n=0,e=0,f=0,t=0,k=0,s=0;
	double a;
	cin>>k;
	while(k--)
	{
		cin>>t;
	    while(cin>>b and b!=0)
	    {
	    	if(t<b)
			{
				e++;
				f=0;
			}
			if(t>b)
			{
				e=0;
				f++;
			}
			if(f>1 or e>1) n=1; 
			t=b;
		}	
		if(n==0) s++;
		n=0;
		f=0;
		e=0;
    }
    cout<<s<<endl;
}
