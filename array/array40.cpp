#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,b=0,d;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>b;
	t=abs(a[0]-b);
	for(int i=1;i<n;i++)
	{
		d=abs(a[i]-b);
	    if(t>d)
	    {
	    	t=d;
	        s=a[i];
		}
	     
	}
	cout<<s;
	
}	

