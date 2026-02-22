#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k,m,h,s=0,t=0;
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
		for(int j=0;j<n;j+=2)
		{
			cout<<a[i][j]<<" ";
			if(j+1>=n) break;
			cout<<a[m-i-1][j+1]<<" ";
		}
		cout<<endl;
	}
}
