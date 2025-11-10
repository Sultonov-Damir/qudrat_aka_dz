#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c=0,s=1,n,m,i=0,v=0,x=1,y=1;
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cin>>m;
		if(n<m and x==1)
		{
			c=m;
			x=0;
		}
		if(c>m and n<m)
		{
			c=m;
			y=i;
		}
	}
	if(c==0) cout<<"00";
	else cout<<y;
}
