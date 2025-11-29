#include<iostream>
#include<cmath>
using namespace std;

void shift(int a[],int &n,int x,int m);

int main()
{
	int n,t=0,s=0,r,y,m,k,h;
	cin>>n;
	int a[n+20]={0},b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	s=n;
	for(int i=1;i<n;i+=2)
	{
		a[s]=a[i];
		s++;
	}
	for(int i=1;i<n;i+=2)
	{
		a[s]=a[i];
		s++;
	}
    for(int i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
}	
void shift(int a[],int &n,int x,int m)
{
	n+=m;
	for(int i=n-1;i>x;i--)
    {
        a[i]=a[i-m];
	}
    	 	
}
