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
	for(int i=1;i<=n;i++)
	{
		b=0;
	    for(int j=0;j<n;j++)
		{
			if(a[j]==i) b++;
			if(b==2)
			{
				cout<<j;
				return 0;
			}
	    }
	}
}	

