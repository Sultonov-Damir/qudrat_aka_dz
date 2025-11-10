#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,s=1,n,m,i=0,v=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		if(i==1)
		{
			c=m;
			b=m;
		}
		if(c>m)
		{
			c=m;
			s=i;
		}
		if(b<=m)
		{
			b=m;
			v=i;
		}
	}
	cout<<s<<" "<<v;
}
