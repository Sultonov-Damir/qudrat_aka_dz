#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k,m,h,s=0,t=0;
	cin>>m>>n>>s;
	int a[m+1][n+1];
	for(int i=0;i<m;i++)
	{
		cin>>h;
		for(int j=0;j<n;j++)
		{
			a[i][j]=h;
			h*=s;
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
