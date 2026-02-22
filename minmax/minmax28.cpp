#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,v=0,m=0,n,s=0,x=0,y=0,sum=0,z;
	cin>>n;
	for(int i=2;i<=n+1;i++)
	{
		cin>>a;
		if(a==1)
		{
			y++;	
		}
		else 
		{
			y=0;
		}
		if(y>s)
		{
		    s=y;
			v=i;	
		}
	}
	cout<<s<<" "<<v-s;
}
