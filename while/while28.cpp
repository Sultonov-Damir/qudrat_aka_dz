#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,s=2,b=1,c=1,n=0,k=2,m,x,y;
	string str;
	cin>>a;
	b=(2+1/s);
	c=abs(s-b);
	while(a<c)
	{
		s=b;
		b=(2+1/s);
		c=abs(s-b);
		k++;
	}
	cout<<s<<" "<<b<<" "<<k;
}
