#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a=1,b,n,d=0,c=1;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cout<<a<<" ";
		a=d+c;
    	d=c;
    	c=a;
	}
}
