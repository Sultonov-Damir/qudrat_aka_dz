#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k,m,h,s=0,t=0;
	cin>>m;
	int a[m+1][m+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m-i;j++)
		{
			cout<<a[i][j]<<" ";
		}
		for(int j=i+1;j<m;j++)
		{
			cout<<a[j][m-i-1]<<" ";
		}
	}
}
