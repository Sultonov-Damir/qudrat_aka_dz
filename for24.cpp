#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,n;
	cin>>n>>a;
	double d=1,c=1;
    for(int i=1;i<=n;i++)
    {
    	c*=(2*i-1)*(2*i);
    	d+=pow(-1,i)*pow(a,(2*i))/c;
    	
	}
	cout<<d;
}
