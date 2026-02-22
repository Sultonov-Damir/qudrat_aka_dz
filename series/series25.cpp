#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int b,n,e,f=1,t=0,k=0,s=0;
	double a;
	cin>>n;
	while(n--)
	{
	    cin>>b;
	    if(f==0)t+=b;
	    if(b==0)
		{
			f=0;
			s+=t;
			t=0;
		} 
	}
	cout<<s;
}
