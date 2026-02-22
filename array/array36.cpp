#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,b,d;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	s=max(a[0],a[n-1]);
	for(int i=1;i<n-1;i++)
	{
	    if(a[i]>=a[i+1] and a[i]<=a[i-1])
		{
			s=max(a[i],s);
		} 
		else if(a[i]<a[i+1] and a[i]>a[i-1])
		{
			s=max(s,a[i]);
		}
	}
	cout<<s;
	
}	

