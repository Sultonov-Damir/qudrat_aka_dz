#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m,k=-1,s=0,t=0;
	cin>>m>>n;
	int a[m+2][n+2],b[m+2][n+2];
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
			b[i][j]=a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			k=a[i][j];
			if(i>0 and k>=a[i-1][j]) s=1;
			if(j>0 and k>=a[i][j-1]) s=1;
			if(i<m-1 and k>=a[i+1][j]) s=1;
			if(j<m-1 and k>=a[i][j+1]) s=1;
			if(i>0 and j>0 and k>=a[i-1][j-1]) s=1;
			if(i>0 and j<m-1 and k>=a[i-1][j+1]) s=1;
			if(i<m-1 and j>0 and k>=a[i+1][j-1]) s=1;
			if(i<m-1 and j<m-1 and k>=a[i+1][j+1]) s=1;
			if(s==0) b[i][j]=0;
		    s=0;
		}
		
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
