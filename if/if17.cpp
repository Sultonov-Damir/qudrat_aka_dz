#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d=0,g=0;
	cin>>a>>b>>c;
	if((a<b and b<c) or (a>b and b>c))
	{
		a*=2;
		b*=2;
		c*=2;
	}
	else
	{
		a*=-1;
		b*=-1;
		c*=-1;
	}
	cout<<a<<" "<<b<<" "<<c;
}
