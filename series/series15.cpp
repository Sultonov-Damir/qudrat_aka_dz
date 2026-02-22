#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,e,f=1,t=0,k,s=0;
	cin>>k;
	while(cin>>a and a!=0)
	{
		s++;
	    if(a>k)
		{
			cout<<s;
			return 0;
		}
	}
	cout<<0;
}
