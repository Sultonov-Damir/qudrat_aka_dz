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
	s=a[0];
	for(int i=0;i<n;i+=2)
	{
		s=min(a[i],s);
	}
	cout<<s;
	
	
}
