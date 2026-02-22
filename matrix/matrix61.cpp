#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m,k=0,s=0,t=1;
	cin>>m>>n>>k;
	int a[m+1][n+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=k;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			swap(a[i][j],a[i+1][j]);
		}
	}
	for(int i=0;i<m-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
