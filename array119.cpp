#include<iostream>
#include<cmath>
using namespace std;

void shift(int a[],int &n,int x,int y);

int main()
{
	int n,m,k,l,s=0,t;
	cin>>n;
	int a[n+n],b[2*n]={0},c[2*n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			shift(a,n,i+1,a[i]);
			i++;
		} 
	}
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
