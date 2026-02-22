#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d=1;
	cin>>a;
    for(int i=1;i<=a;i++)
    {
    	b=i;
    	d*=(1+b/10);
	}
	cout<<d;
}
