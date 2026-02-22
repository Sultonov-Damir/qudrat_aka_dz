#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,r;
	cin>>n;
	int a[n+1],b[n+1],c[n+1],d[3*n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	if(a[1]<b[1])
	for(int i=0;i<n;i++)
	{
	    swap(a[i],b[i]);
	}
    if(a[1]<c[1])
	for(int i=0;i<n;i++)
	{
	    swap(a[i],c[i]);
	}
	if(b[1]<c[1])
	for(int i=0;i<n;i++)
	{
	    swap(b[i],c[i]);
	}
	for(int i=0;i<3*n;i++)
	{
		if(i<n) d[i]=c[i];
		else if(i<2*n) d[i]=b[i-n];
		else if(i<3*n) d[i]=a[i-2*n];
	}
	for(int i=0;i<3*n;i++)
	{
		cout<<d[i]<<" ";
	}
}	

