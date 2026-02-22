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
	for(int i=0;i<n;i++)
	{
		k+=a[0][i];
		for(int j=0;j<m-1;j++)
		{
			k+=a[j+1][i];
			if(a[j][i]>a[j+1][i])
			{
				x++;
			}
			if(a[j][i]<a[j+1][i])
			{
				y++;
			}
		}
		if(x==(m-1) or y==(m-1))
		{
			s=max(s,k);
		} 
		x=0;
		y=0;
		k=0;
	}
	cout<<s;
	
	
	
	
	
}
