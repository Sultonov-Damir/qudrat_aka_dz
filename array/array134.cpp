#include<iostream>
#include<cmath>
using namespace std;

double st(int a,int b,int x,int y);

int main()
{
	double v,l,s=0,t=0;
	int n,m=0,r;
	cin>>n;
	int a[n],b[n],x=0,y=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			s=st(a[i],b[i],a[j],b[j]);
			if(t<s)
			{
				t=s;
				m=i;
				r=j;
			}
		}
	}
	cout<<a[m]<<" "<<b[m]<<" "<<a[r]<<" "<<b[r]<<" "<<t;
}
double st(int a,int b,int x,int y)
{
	double s=abs(a-x),l=abs(b-y),n;
	n=sqrt(s*s+l*l);
	return n;
}
