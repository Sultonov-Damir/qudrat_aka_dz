#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c,d,e,f=1,s=0,t=0;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    if(a%2!=0 and ++s)
	    cout<<a<<" ";
	}
	cout<<s;
}
