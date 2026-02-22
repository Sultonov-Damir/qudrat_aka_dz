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
	for(int i=n-1;i>0;i--)
	{
	    if(a[i]>a[i-1])
		{
		    cout<<i<<" ";
			s++;	
		} 
	}
	cout<<s;
	
	
}	

