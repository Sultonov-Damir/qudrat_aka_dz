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
	for(int i=n-2;i>=0;i-=2)
	{
		cout<<a[i]<<" ";
	}
}
