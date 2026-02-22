#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c,d,e,f=1,s=0,t=0;
	double h;
	cin>>t;
	while(t--)
	{
	    cin>>h;
	    a=h;
		s+=a;
		f*=a;
	}
	cout<<s<<" "<<f;
}
