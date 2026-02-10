#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m,k=-1,s=0,t=0;
	cin>>m>>n;
	int a[m+1][n+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(0>a[j][i])
			{
				s=1;
			}
		}
		if(s==0)
		{
			k=i;
			n--;
			for(int u=0;u<m;u++)
	        {
		        for(int j=k;j<n;j++)
				{
			        swap(a[u][j],a[u][j+1]);
		        }
	        }
	        i--;
		}
		s=0;
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
