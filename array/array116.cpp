#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,k,l,s=0,t;
	cin>>n;
	int a[n+n],b[2*n]={0},c[2*n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	c[s]=a[0];
	b[s]=1;
	for(int i=1;i<n;i++)
	{
		if(c[s]==a[i]) b[s]++;
		else
		{
			s++;
			c[s]=a[i];
			b[s]=1;
		}
	}
	for(int i=0;i<s+1;i++) cout<<b[i]<<" "<<c[i]<<endl;
}
