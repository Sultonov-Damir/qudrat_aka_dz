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
		for(int j=0;j<n;j++)
		{
			if(a[k][s]<a[i][j])
			{
				s=j;
				k=i;
			}
		}
	}
	for(int i=0;i<n;i++) a[m][i]=a[k][i];
	for(int i=m-1;i>k;i--)
	{
		for(int j=0;j<n;j++)
		{
			swap(a[i][j],a[i+1][j]);
		}
	}
	m++;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
