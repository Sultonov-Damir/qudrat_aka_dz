#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m,k=0,s=0,t=0;
	cin>>m>>n;
	int a[m+2][n+2];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int u=i+1;u<m;u++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][k]>a[i][j]) k=j;
				if(a[u][s]>a[u][j]) s=j;
			}
			if(a[i][k]<a[u][s])
			for(int j=0;j<n;j++)
			swap(a[i][j],a[u][j]);
			s=0;
			k=0;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
