#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,v=0,m=0,n,s=0,x=0,y=0,sum=0,z;
	cin>>n>>x>>y>>z;
	for(int i=4;i<=n;i++)
	{
		cin>>a;
		if(x>y) swap(x,y);
		if(x>z) swap(x,z);
		if(x<a)
		{
			x=a;
		}
	}
	cout<<y<<" "<<x<<" "<<z;
}
