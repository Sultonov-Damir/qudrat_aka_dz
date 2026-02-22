#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,s=1,n,m,i=0,v;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m>>v;
		if(i==0) c=m/v;
		if(c<m/v)
		{
			c=m/v;
		}
	}
	cout<<c;
}
