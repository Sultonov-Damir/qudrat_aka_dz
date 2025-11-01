#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a=1,b=3,n,k,d=0,c=2;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<1+i;j++)
    	{
    		a*=i;
		}
		d+=a;
		a=1;	
	}
	cout<<d;
}
