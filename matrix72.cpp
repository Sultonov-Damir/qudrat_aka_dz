#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m,k=-1,s=0,t=0;
	cin>>m>>n;
	int a[m+2][n+2];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(0>a[j][i])
			{
				s=1;
			}
		}
		if(s==0)
		{
			k=i;
			break;
		}
		s=0;
	}
	if(k!=-1)
	{
		for(int i=0;i<m;i++) a[i][n]=1;
	    for(int i=n-1;i>=k;i--)
	    {
		    for(int j=0;j<m;j++)
		    {
			    swap(a[j][i],a[j][i+1]);
		    }
	    }
	    n++;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
