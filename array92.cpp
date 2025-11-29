#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,r,y,m,k,h;
	cin>>n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
	        a[s]=a[i];
	        s++;
		}
	}
	cout<<s<<endl;
	for(int i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
}	

