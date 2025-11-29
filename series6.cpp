#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a,b,c,d,e,f=1,s=0,t=0;
	int h;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    h=a;
		s+=a-h;
		f*=a-h;
	}
	cout<<s<<" "<<f;
}
