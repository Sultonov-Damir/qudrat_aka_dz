#include<iostream>
#include<cmath>
using namespace std;

void shift(int a[],int &n,int x,int y,int s);
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
	cin>>k;
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
	k--;
    if(k<=s)
    {
    	for(int i=0;i<k;i++)
    	{
    		t+=b[i];
		}
		for(int i=0;i<s;i++)
    	{
    		m+=b[i];
		}
		dshift(a,n,m,b[s]);
		dshift(a,n,t,b[k]);
		shift(a,n,m-b[k],b[k],c[k]);
		shift(a,n,t,b[s],c[s]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void shift(int a[],int &n,int x,int y,int s)
{
	int g=a[x];
	n+=y;
	for(int i=n-1;i>x;i--)
    {
        a[i]=a[i-y];
	}
    for(int i=x;i<x+y;i++)
	{
		a[i]=s;
	}	 	
}

void dshift(int a[],int &n,int x,int y)
{
	for(int i=x;i<n;i++)
    {
        a[i]=a[i+y];
	}
	n-=y; 	
}
