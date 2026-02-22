#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,d,r;
	cin>>n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]>0)
	    {
	        b[t]=a[i];
	        t++;
		}
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]<0)
	    {
	        c[s]=a[i];
	        s++;
		}
	}
	cout<<t<<endl;
	for(int i=0;i<t;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl<<s<<endl;
	for(int i=0;i<s;i++)
	{
		cout<<c[i]<<" ";
	}
}	

