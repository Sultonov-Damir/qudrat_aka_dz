#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k=0,m,h,x=0,y=0,b,s=0,t=0; 
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
		k+=a[i][0];
		for(int j=0;j<n-1;j++)
		{
			k+=a[i][j+1];
			if(a[i][j]>a[i][j+1])
			{
				x++;
			}
			if(a[i][j]<a[i][j+1])
			{
				y++;
			}
		}
		if(x==(n-1) or y==(n-1))
		{
			if(i==0)
			s=k;
			else s=min(s,k);
		} 
		x=0;
		y=0;
		k=0;
	}
	cout<<s;
	
	
	
	
	
}
