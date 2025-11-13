#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,r,y,m,k,h;
	cin>>n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>k>>h;
	for(int i=1;i<=(h-k)/2;i++)
	{
        swap(a[k+i],a[h-i]);    
    }
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}	

