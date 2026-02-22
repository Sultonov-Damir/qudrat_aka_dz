#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c=1,d=0;
	cin>>a;
    for(int i=1;i<=a;i++)
    {
    	b=i;
    	d+=c*(1+b/10);
    	c=-c;
	}
	cout<<d;
}
