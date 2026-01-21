#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int b,n,e=1,f=1,t=0,k=0,s=0;
	double a;
	cin>>k;
	while(k--)
	{
		cin>>t;
	    while(cin>>b and b!=0)
	    {
			if(t>b) f=0;
			t=b;
		}
		if(f==1) s++;
		f=1;	
	}
	cout<<s<<endl;
}
