#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a=1,b,n,d=1,c=2;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	a=(d+2*c)/3;
    	cout<<a<<" ";
    	d=c;
    	c=a;
	}
}
