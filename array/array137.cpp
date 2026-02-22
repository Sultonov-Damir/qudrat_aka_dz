#include<iostream>
#include<cmath>
using namespace std;

double st(int a,int b,int x,int y);

int main()
{
	double v,l,s=0,t=0;
	int n,n2,m=0,r=1,h=2;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
    for(int i=0;i<n;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		for(int k=j+1;k<n;k++)
    		{
    			s=st(a[i],b[i],a[j],b[j])+st(a[i],b[i],a[k],b[k])+st(a[k],b[k],a[j],b[j]);
    			if(t<s)
    			{
    				t=s;
    				m=i;
    				r=j;
    				h=k;
				}
    			s=0;
			}
		}
	}
	cout<<a[m]<<" "<<b[m]<<" "<<a[r]<<" "<<b[r]<<" "<<a[h]<<" "<<b[h];
}
double st(int a,int b,int x,int y)
{
	double s=abs(a-x),l=abs(b-y),n;
	n=sqrt(s*s+l*l);
	return n;
}
