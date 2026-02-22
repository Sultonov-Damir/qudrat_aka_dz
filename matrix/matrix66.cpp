#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m,k=-1,s=0,t=0;
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
		for(int j=0;j<m;j++)
		{
			if(0>a[j][i])
			{
				s++;
			}
		}
		if(s==m)
		{
			k=i;
			t=1;
		}
		s=0;
	}
	if(k!=-1)
	for(int i=0;i<m;i++)
	{
		for(int j=k;j<n;j++)
		{
			swap(a[i][j],a[i][j+1]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n-t;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
