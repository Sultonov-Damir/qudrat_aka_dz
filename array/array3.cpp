#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=1,a1,d;
	cin>>a1>>d;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=a1+i*d;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
