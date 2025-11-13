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
	for(int i=0;i<n;i+=2)
	{
		cout<<a[i]<<" "<<a[i+1]<<" "<<a[n-1-i]<<" "<<a[n-2-i]<<" ";
	}
}
