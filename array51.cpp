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
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		swap(a[i],b[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
}	

