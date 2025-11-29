#include<iostream>
#include<cmath>
using namespace std;

double st(int a,int b,int x,int y);

int main()
{
	double v,l,s=0,t=0;
	int n1,n2,m=0,r=0;
	cin>>n1;
	int a[n1],b[n1];
	for(int i=0;i<n1;i++)
	{
		cin>>a[i]>>b[i];
	}
	cin>>n2;
	int x[n2],y[n2];
	for(int i=0;i<n2;i++)
	{
		cin>>x[i]>>y[i];
	}
	t=st(a[0],b[0],x[0],y[0]);
    for(int i=0;i<n1;i++)
    {
    	for(int j=0;j<n2;j++)
    	{
    		s=st(a[i],b[i],x[j],y[j]);
    		if(t>s) 
    		{
    			t=s;
    			m=i;
    			r=j;
			}
		}
	}
	cout<<a[m]<<" "<<b[m]<<" "<<x[r]<<" "<<y[r]<<" "<<t;
}
double st(int a,int b,int x,int y)
{
	double s=abs(a-x),l=abs(b-y),n;
	n=sqrt(s*s+l*l);
	return n;
}
