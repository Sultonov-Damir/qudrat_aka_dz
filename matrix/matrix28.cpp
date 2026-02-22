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
	for(int i=0;i<n;i++)
	{
		t=0;
		k=a[0][i];
		for(int j=0;j<m;j++)
		{
			t+=a[j][i];
			k=min(k,a[j][i]);
		}
		if(i==0)
		{
			h=k;
			s=t;
		}
		else if(s<t)
		{
			s=t;
			h=k;
		}
	}
	cout<<h;
}
