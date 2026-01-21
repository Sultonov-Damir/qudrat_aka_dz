#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k,m,h,s=0,t=1; 
	cin>>m>>n>>k;
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
		s+=a[k][i];
		t*=a[k][i];
	}
	cout<<s<<" "<<t;
}
