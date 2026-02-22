#include<iostream>
#include<cmath>
using namespace std;

int search(int a[],int n,int f);
void shift(int a[],int &n,int x);

int main()
{
	int n,t=0,s=2,r,y,m,k,h;
	cin>>n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j]) t++;
		}
		if(t==2)
		{
			shift(a,n,a[i]);
			
		}
		t=0;
		
	}
    for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}	
void shift(int a[],int &n,int x)
{
	int f=0;
	while(f!=-1)
	{
	f=search(a,n,x);
	if(f!=-1)
	{
		for(int i=f;i<n-1;i++)
        {
    	    a[i]=a[i+1];
	    }
	    a[n-1]=NULL;
	    n--;
	}	
	} 	
}
int search(int a[],int n,int f)
{
	for(int i=0;i<n;i++)
	{
		if(f==a[i]) return i;
	}
	return -1;
}
