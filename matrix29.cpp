#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k=0,m,h;
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
			t+=a[i][j];
		}
		t=t/n;
		for(int j=0;j<n;j++)
		{
			if(t>a[i][j]) cout<<a[i][j]<<" ";
		}
		cout<<endl;
		t=0;
	}
}
