#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int b,n,e,f=1,t=0,k=0,s=0;
	double a;
	cin>>n;
	k=n;
	while(n--)
	{
	    cin>>b;
	    t=k-n;
	    while(t--)
	    {
	    	f*=b;
		}
		cout<<f<<" ";
		f=1;
	}
}
