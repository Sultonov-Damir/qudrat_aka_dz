#include<iostream>
#include<cmath>
using namespace std;

double st(int a,int b,int x,int y);

int main()
{
	double v,l,s=0,t=0;
	int n,n2,m=0,r=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		s+=st(a[i],b[i],a[j],b[j]);
		}
		if(i==0) t=s;
		if(s<t) 
		{
			m=i;
			t=s;
		}
		s=0;
	}
	cout<<a[m]<<" "<<b[m]<<" "<<t;
}
double st(int a,int b,int x,int y)
{
	double s=abs(a-x),l=abs(b-y),n;
	n=sqrt(s*s+l*l);
	return n;
}
