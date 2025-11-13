#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,b,d;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	d=a[1]/a[0];
	for(int i=2;i<n;i++)
	{
        if(d!=(a[i]/a[i-1]))
        {
        	cout<<0;
        	return 0;
		}
	}
	cout<<d;
	
	
}
