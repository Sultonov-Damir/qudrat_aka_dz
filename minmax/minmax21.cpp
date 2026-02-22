#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,v=0,m=0,n,s=0,x=0,y=0,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		sum+=a;
		if(x==0)
		{
			x=1;
			c=a;
			b=a;
		}
		if(c>a)
		{
			y=1;
			c=a;
			v=a;
		}
		else if(c==a)
		{
			y++;
			v+=a;
		} 
		if(b<a)
		{
			s=1;
			b=a;
			m=a;
		}
		else if(b==a)
		{
			s++;
			m=a;
		}
	}
	if((s+y)>=n) cout<<0;
	else cout<<(sum-v-m)/(n-s-y);
}
