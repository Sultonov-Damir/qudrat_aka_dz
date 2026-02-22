#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=1,b=0,d,r;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>r;
	d=abs(a[0]+a[1]-r);
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
		{
			t=abs(a[i]+a[j]-r);
			if(d>t)
			{
				d=t;
				s=j;
				b=i;
			}
	    }    
	}
	cout<<b<<" "<<s;
}	

