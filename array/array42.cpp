#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=1,b=0,d;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>b;
	t=abs(a[s-1]+a[s]-b);
	for(int i=1;i<n;i++)
	{
		d=abs(a[i-1]+a[i]-b);
	    if(t>d)
	    {
	    	t=d;
	        s=i;
		}
	     
	}
	cout<<a[s-1]<<" "<<a[s];
	
}	

