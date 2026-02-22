#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,r,y,m;
	cin>>n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]>a[t]) t=i;
	    if(a[i]<a[s]) s=i;
    }
    swap(a[t],a[s]);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}	

