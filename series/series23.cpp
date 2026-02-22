#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int b,n,e,f=1,t=0,k=0,s=0;
	double a;
	cin>>n>>t;
	while(--n)
	{
	    cin>>b;
	    if(b>t)
	    {
	    	s++;
	    	k=0;
		}
		if(b<=t)
		{
			k++;
			s=0;
		}
		if(k>1 or s>1) 
		{
			cout<<f;
			return 0;
		}
		f++;
	}
	cout<<0;
}
