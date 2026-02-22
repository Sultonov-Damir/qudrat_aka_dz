#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,n;
	cin>>n>>a;
	double d=1,c=1;
    for(int i=1;i<=n;i++)
    {
    	d+=pow(-1,i-1)*pow(a,(i))/i;	
	}
	cout<<d;
}
