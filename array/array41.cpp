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
	for(int i=1;i<n;i++)
	{
	    if((a[s-1]+a[s])<(a[i-1]+a[i]))
	    {
	    	s=i;
		}
	     
	}
	cout<<a[s-1]<<" "<<a[s];
	
}	

