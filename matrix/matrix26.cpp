#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k,m,h,s=0,t=1; 
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
		t=1;
		for(int j=0;j<m;j++)
		{
			t*=a[j][i];
		}
		if(i==0)
		{
			h=0;
			s=t;
		}
		else if(s<t)
		{
			s=t;
			h=i;
		}
	}
	cout<<h<<" "<<s;
}
