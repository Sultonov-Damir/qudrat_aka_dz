#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,d,r;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<5)
		{
			b[i]=2*a[i];
		}
		else b[i]=a[i]/2;
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
}	

