#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k=0,m,h,s=0,t=1; 
	cin>>m>>n;
	int a[m+1][n+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		t=0;
		for(int j=0;j<n;j++)
		{
			t+=a[i][j];
			k=max(k,a[i][j]);
		}
		if(i==0)
		{
			h=k;
			s=t;
		}
		else if(s>t)
		{
			s=t;
			h=k;
		}
	}
	cout<<h;
}
