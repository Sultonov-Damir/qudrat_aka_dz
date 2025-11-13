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
    for(int i=0;i<n;i++)
    {
    	if(a[i]>a[t]) t=i;
    	if(a[i]<a[s]) s=i;
	}
	if(t>s) swap(s,t);
	for(int i=0;i<(s-t)/2;i++)
	{
		swap(a[t+i],a[s-i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}	

