#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k,m,h;
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
		for(int j=1;j<n;j+=2)
		{
			t+=a[i][j];
			s++;
		}
		cout<<t/s<<" ";
		t=0;
		s=0;
	}
}
