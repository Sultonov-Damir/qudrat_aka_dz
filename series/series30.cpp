#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int b,n,e,f=1,t=0,k=0,s=0;
	double a;
	cin>>n>>k;
	while(k--)
	{
		t=n;
	    while(t--)
	    {
	    	cin>>b;
	    	s+=b;
		}
		cout<<s<<" ";
		s=0;
	}
}
