#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,v,m,n,s=0,x=0,y=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(x==0)
		{
			x=1;
			c=a;
		}
		if(c<a)
		{
			x=i;
			y=i;
			c=a;
		}
		else if(c==a) y=i;
	}
	if((y-x)==0) cout<<0;
	else cout<<y-x-1;
}
