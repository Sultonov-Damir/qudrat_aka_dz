#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,k,l,s,t;
	cin>>n;
	int a[n+n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=1+i;j<n;j++)
		{
			if(a[k]>a[j]) k=j; 
		}
		swap(a[i],a[k]);
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
