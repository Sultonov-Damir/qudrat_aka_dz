#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k=0,m,h,x=0,y=-1,b;
	double s=0,t=0; 
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
			if(a[i][j]%2==0) x++;
		}
		if(x==n) y=i;
		x=0;
	}
	if(y==-1)
	cout<<"Bunday satr yo'q";
	else cout<<y;
	
	
	
	
	
	
	
}
