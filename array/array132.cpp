#include<iostream>
#include<cmath>
using namespace std;

double st(int a,int b,int x,int y);

int main()
{
	double v,l,s=0,t=0;
	int n,m=0;
	cin>>n;
	int a[n],b[n],x=0,y=0;
	a[0]=0;b[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		s=st(a[i],b[i],x,y);
		if(t<s and a[i]<0 and b[i]>0)
		{
			t=s;
			m=i;
		}
	}
	cout<<a[m]<<" "<<b[m];
}
double st(int a,int b,int x,int y)
{
	double s=abs(a-x),l=abs(b-y),n;
	n=sqrt(s*s+l*l);
	return n;
}
