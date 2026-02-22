#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k=0,m,h,x=0,y=-1,b,s=0,t=0; 
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
		for(int j=0;j<n-1;j++)
		{
			if(a[i][j]<a[i][j+1])
			{
				x++;
			}
		}
		if(x==(n-1)) t++;
		x=0;
	}
	cout<<t;
	
	
	
	
	
}
