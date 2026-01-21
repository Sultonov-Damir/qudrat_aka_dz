#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int b,n,e=1,f=1,t=0,k=0,s=0;
	double a;
	cin>>n>>k;
	while(k--)
	{
		t=n;
	    while(t--)
	    {
	    	cin>>b;
	    	if(b==2) f=0;
			s+=b;
		}
		if(f!=0) s=0;
		cout<<s<<endl;
		f=1;
		s=0;	
	}
}
