#include<iostream>
#include<cmath>
using namespace std;

void shift(int a[],int &n,int x);

int main()
{
	int n,t=0,s=2,r,y,m,k,h;
	cin>>n;
	int a[n+10]={0},b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	shift(a,n,k);
	a[k]=0;
    for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}	
void shift(int a[],int &n,int x)
{
	n++;
	for(int i=n-1;i>=x;i--)
    {
        a[i]=a[i-1];
	}
    	 	
}
