#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k,m,h,s=0,t=1; 
	cin>>m;
	int a[m+1][m+1];
	for(int i=0;i<m;i++)
	{
		for(int j=i;j<m-i;j++)
		{
			a[i][j]=t;
			t++;
		}
		for(int j=i+1;j<m-i;j++)
		{
			a[j][m-i-1]=t;
			t++;
		}
		for(int j=m-2-i;j>=i+1;j--)
		{
			a[m-i-1][j]=t;
			t++;
		}
		for(int j=m-1-i;j>=i+1;j--)
		{
			a[j][i]=t;
			t++;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
