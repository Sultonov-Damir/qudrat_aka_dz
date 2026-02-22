#include<iostream>
#include<cmath>
using namespace std;

void shift(int a[],int &n,int x);

int main()
{
	int n,t=0,s=0,r,y,m,k,h;
	cin>>n;
	int a[n+10]={0},b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[s]) s=i;
		if(a[i]<a[t]) t=i;
	}
	shift(a,n,s);
	a[s+1]=0;
	shift(a,n,t+1);
	a[t]=0;
    for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}	
void shift(int a[],int &n,int x)
{
	n++;
	for(int i=n-1;i>x;i--)
    {
        a[i]=a[i-1];
	}
    	 	
}
