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
		for(int j=0;j<n;j++)
		{
			if(t<a[i][j])
			{
				t=a[i][j];
				y=j;
			}
		}
		for(int j=0;j<m;j++)
		{
			if(a[j][y]>a[i][y]) x++;
		}
		if(x==(m-1))
		{
			cout<<a[i][y];
			return 0;
		}
		t=0;
		x=0;
	}
	cout<<0;
	
	
	
	
	
}
