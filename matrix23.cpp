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
		t=a[i][0];
		for(int j=0;j<n;j++)
		{
			t=min(a[i][j],t);
		}
		cout<<t<<" ";
	}
}
