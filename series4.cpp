#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a,b,c,d,e,f=1,s=0,t=0;
	cin>>t;
	while(t--)
	{
	    cin>>a;
		s+=a;
		f*=a;
	}
	cout<<s<<" "<<f;
}
