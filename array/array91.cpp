#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,r,y,m,k,h;
	cin>>n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k>>m;
	for(int i=k;i<=m;i++)
	{
	    a[i]=a[i+m-k+1];
	}
	cout<<n-(m-k+1)<<endl;
	for(int i=0;i<n-(m-k+1);i++)
	{
		cout<<a[i]<<" ";
	}
}	

