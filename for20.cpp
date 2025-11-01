#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c=1,d=0,n;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	c*=i;
    	d+=c;
	}
	cout<<d;
}
