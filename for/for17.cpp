#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c=1,d=0,n;
	cin>>n>>a;
    for(int i=0;i<=n;i++)
    {
    	b=pow(a,i);
    	cout<<b<<" ";
    	d+=b;
	}
	cout<<d;
}
