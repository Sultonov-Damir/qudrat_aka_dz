#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,v=0,m=0,n,s=0,x=0,y=0,sum=0,z;
	cin>>n>>x>>y;
	s=x*y;
	for(int i=3;i<=n;i++)
	{
		cin>>a;
		if(s>(a*y))
		{
		    s=a*y;
		}
		y=a;
	}
	cout<<s;
}
