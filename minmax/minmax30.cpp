#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,v=0,m=0,n,s=0,x=0,y=1,sum=0,z;
	cin>>n>>x;
	for(int i=2;i<=n;i++)
	{
		cin>>a;
		if(x<a)
		{
			x=a;
			y=1;
			s=0;
			m=0;
		}
		else if(x==a)
		{
			y++;
			sum=0;
		}
		else if(x>a and sum==0)
		{
			sum=1;
			if(m==0)
			{
				s=y;	
			}
			else s=min(s,y);
			m=1;
			y=0;
		}
	}
	if(s==0 and y>0) s=y;
	cout<<s;
}
