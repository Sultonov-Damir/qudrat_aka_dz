#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,v=0,m=0,n,s=0,x=0,y=0,sum=0,z;
	cin>>n>>x;
	for(int i=1;i<n;i++)
	{
		cin>>a;
		if(a==x)
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
		x=a;
	}
	cout<<s+1<<" "<<v-s+1;
}
