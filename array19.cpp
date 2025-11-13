#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,a1,d;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n-1;i++)
	{
		if(a[0]<a[i] and a[i]<a[n-1])
		{
	        t=i;
		} 
	}
	cout<<t;
}
