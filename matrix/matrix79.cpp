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
	for(int i=0;i<n;i++)
	{
		for(int u=i+1;u<n;u++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[k][i]<a[j][i]) k=j;
				if(a[s][u]<a[j][u]) s=j;
			}
			if(a[k][i]>a[s][u])
			for(int j=0;j<m;j++)
			swap(a[j][i],a[j][u]);
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
