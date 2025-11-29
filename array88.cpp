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
	for(int i=n-2;i>=0;i--)
	{
		swap(a[i+1],a[i]);
		if(a[i-1]<=a[i] and a[i+1]>=a[i]) break;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}	

