#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=5,d,r;
	int a[10+1],b[10+1],c[10+1];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	if(a[4]<b[4])
	{
		t=5;
		s=0;
	}
	for(int i=0;i<5;i++)
	{
		c[i+s]=a[i];
		c[i+t]=b[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<c[i]<<" ";
	}
}	

