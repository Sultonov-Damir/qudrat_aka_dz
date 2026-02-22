#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,d,r;
	cin>>n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i+=2)
	{
		b[t]=a[i];
		t++;
	}
	for(int i=1;i<n;i+=2)
	{
		b[t]=a[i];
		t++;
	}
	for(int i=0;i<t;i++)
	{
		cout<<b[i]<<" ";
	}
}	

