#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int b,n,e,f=1,t=0,k,s=0;
	double a;
	cin>>n>>t;
	while(--n)
	{
	    cin>>b;
	    if(b<t)
	    {
	    	
	    	cout<<"false";
	    	return 0;
		}
		t=b;
	}
	cout<<"true";
}
