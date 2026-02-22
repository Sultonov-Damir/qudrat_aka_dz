#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k,m,h,s=0,t=0;
	cin>>m>>n;
	int a[m+1][n+1];
	for(int i=0;i<n;i++)
	{
		cin>>h;
		for(int j=0;j<m;j++)
		{
			a[j][i]=h;
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
