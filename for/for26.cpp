#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,n;
	cin>>n>>a;
	double d=0,c=1;
    for(int i=0;i<=n;i++)
    {
    	d+=pow(-1,i)*pow(a,(2*i+1))/(2*i+1);	
	}
	cout<<d;
}
