#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a=1,b=3,n,d=1,c=2;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	a=b+c-2*d;
    	cout<<a<<" ";
    	d=c;
    	c=b;
    	b=a;
    	
	}
}
