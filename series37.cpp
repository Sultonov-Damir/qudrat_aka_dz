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
	    	n++;
			if(t>b) f++;
			else if(t<b) e++;
			t=b;
		}
		if(f==n or e==n) s++;
		f=0;
		e=0;
		n=0;	
	}
	cout<<s<<endl;
}
