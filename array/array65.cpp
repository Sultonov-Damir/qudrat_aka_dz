#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,r;
	cin>>n;
	int a[n+1],b[n+1],c[n+1],d[3*n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>t;
	for(int i=1;i<=n;i++)
	{
	    a[i]+=a[t];
    }
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}	

