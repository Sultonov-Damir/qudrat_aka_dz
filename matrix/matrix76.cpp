#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m,k=-1,s=0,t=0;
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
			if(a[i][0]>a[u][0])
			for(int j=0;j<n;j++)
			swap(a[i][j],a[u][j]);
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
