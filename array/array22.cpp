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
	cin>>b>>d;
	for(int i=0;i<n;i++)
	{
        if(i<b or i>d)  t+=a[i];
	}
	cout<<t;
}
