#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,n;
	cin>>n>>a;
	double d=a,c=1;
    for(int i=1;i<=n;i++)
    {
    	c*=2*i;
    	d+=(2*i-1)*pow(a,(2*i+1))/(2*i+1)/c;	
	}
	cout<<d;
}
