#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k=0,m,h,x,y,b;
	double s=0,t=0; 
	cin>>m>>n;
	int a[m+1][n+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			t+=a[i][j];
		}
	}
	t=t/(n*m);
	cout<<t<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			s+=a[i][j];
		}
		s=s/n;
		if(i==0)
		{
			h=abs(t-s);
			x=i;
		}
		else if(h>abs(t-s))
		{
			h=abs(t-s);
			x=i;
		}
		s=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			s+=a[j][i];
		}
		s=s/m;
		if(i==0)
		{
			h=abs(t-s);
			y=i;
		}
		else if(h>abs(t-s))
		{
			h=abs(t-s);
			y=i;
		}
		s=0;
	}
	cout<<x<<" "<<y;
}
