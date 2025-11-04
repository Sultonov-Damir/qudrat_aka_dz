#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,s=2,b,c,n=0,k=3,m,x,y;
	string str;
	cin>>a;
	b=1;
	c=2;
	m=(b+2*c)/3;
	while(abs(m-c)>a)
	{
		k++;
		b=c;
		c=m;
		m=(b+2*c)/3;
	}
	cout<<c<<" "<<m<<" "<<k;
}
