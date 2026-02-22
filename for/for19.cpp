#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c=1,d=0,n;
	cin>>n;
    for(int i=2;i<=n;i++)
    {
    	c*=i;
	}
	cout<<c;
}
