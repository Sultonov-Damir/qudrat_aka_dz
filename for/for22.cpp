#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c=1,d=1,n;
	cin>>n>>a;
    for(int i=1;i<=n;i++)
    {
    	c*=i;
    	d+=pow(a,i)/c;
	}
	cout<<d;
}
