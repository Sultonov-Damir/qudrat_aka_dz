#include<iostream>
#include<cmath>
using namespace std;

void shift(int a[],int &n,int x,int y);
void dshift(int a[],int &n,int x,int y);

int main()
{
	int n,m=0,k,l,s=0,t=0;
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
	for(int i=0;i<=s;i++)
	{
		t+=b[i];
		shift(a,n,t,c[i]);
		t++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void shift(int a[],int &n,int x,int y)
{
	int g=a[x];
	n++;
	for(int i=n-1;i>x;i--)
    {
        a[i]=a[i-1];
	}
	a[x]=y;	 	
}

void dshift(int a[],int &n,int x,int y)
{
	for(int i=x;i<n;i++)
    {
        a[i]=a[i+y];
	}
	n-=y; 	
}
