#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=t;
		t*=2;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
