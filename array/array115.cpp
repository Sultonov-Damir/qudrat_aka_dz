#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,k,l,s,t;
	cin>>n;
	int a[n+n],b[2*n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=i;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[b[j]]>a[b[j+1]])
			{
				swap(b[j],b[j+1]);
			}
			  
		}
	}
	for(int i=0;i<n;i++) cout<<b[i]<<" ";
}
