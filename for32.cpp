#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,n,d,c=1;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	a=(c+1)/i;
    	cout<<a<<" ";
    	c=a;
	}
}
