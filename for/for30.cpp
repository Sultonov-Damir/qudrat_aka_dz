#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,n,d,c=1;
	cin>>n>>a>>b;
	d=(b-a)/n;
    for(int i=0;i<=n;i++)
    {
    	cout<<1-sin(a+i*d)<<" ";
	}
}
