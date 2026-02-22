#include<iostream>
#include<cmath>
using namespace std;

void shift(int a[],int &n,int x,int y,int s);
void dshift(int a[],int &n,int x,int y);

int main()
{
	int n,m,k,l,s=0,t=0;
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
    	for(int i=1;i<k;i++)
    	{
    		t+=b[i];
		}
		dshift(a,n,0,b[0]);
		dshift(a,n,t,b[k]);
		shift(a,n,t,b[0],c[0]);
		shift(a,n,0,b[k],c[k]);
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
