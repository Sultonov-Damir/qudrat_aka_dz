#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,s=1,n,m,i=0,v=1,x=1,y=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		if(i==1)
		{
			c=m;
			b=m;
		}
		if(b>m)
		{
			b=m;
		    y=i;
		}
		if(c<m)
		{
			c=m;
			x=i;
		}
	}
	cout<<min(x,y);
}
