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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			b=a[j][i];
			for(int v=0;v<m;v++)
			{
				if(b==a[v][i])
				{
					x++;
					s=max(x,s);
				}
			}
			x=0;
		}
		if(s>y)
		{
			y=s;
			t=i;
		}
		s=0;
	}
	cout<<t;
	
	
	
	
	
}
