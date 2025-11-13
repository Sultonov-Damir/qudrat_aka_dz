#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=1,a1,d;
	cin>>n;
	int a[n+2];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<n+2;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	for(int i=2;i<n+2;i++)
	{
		cout<<a[i]<<" ";
	}
}
