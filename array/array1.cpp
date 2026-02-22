#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=2*i+1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
