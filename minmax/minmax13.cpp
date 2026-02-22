#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c=0,s=1,n,m,i=0,v=0,x=1,y;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		if(m%2!=0 and x==1)
		{
			c=m;
			x=0;
		}
		if(c<m and m%2!=0)
		{
			c=m;
		}
	}
	cout<<c;
}
