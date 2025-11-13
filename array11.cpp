#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,a1,d;
	cin>>n>>d;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=d;i<=n;i+=d)
	{
		cout<<a[i]<<" ";
	}
}
