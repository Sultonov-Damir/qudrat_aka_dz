#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,b=0,d,r;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		b=1;
	    for(int j=0;j<i;j++)
		{
			if(a[i]==a[j]) b++;
	    }
		if(s<b)
		{
			s=b;
			r=a[i];
		} 
	}
	cout<<r;
}	

