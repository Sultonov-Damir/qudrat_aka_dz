#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,a1,d;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<" ";
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]%2!=0)
		{
			cout<<a[i]<<" ";
		}
	}
}
