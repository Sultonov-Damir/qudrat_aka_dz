#include<iostream>
#include<cmath>
using namespace std;

void shift(int a[],int &n,int x,int y);
void dshift(int a[],int &n,int x);

int main()
{
	int n,m,k,l,s=0,t;
	cin>>n;
	int a[n+n],b[2*n]={0},c[2*n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{ 
	    if(a[i]!=a[i+1])
	    {
	    	dshift(a,n,i);
	    	i--;
		}
	}
	dshift(a,n,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void shift(int a[],int &n,int x,int y)
{
	n++;
	for(int i=n-1;i>x;i--)
    {
        a[i]=a[i-1];
	}
	a[x]=y;
    	 	
}

void dshift(int a[],int &n,int x)
{
	for(int i=x;i<n;i++)
    {
        a[i]=a[i+1];
	}
	n--; 	
}
