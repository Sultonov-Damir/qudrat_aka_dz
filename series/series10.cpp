#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c,d,e,f=1,t=0;
	bool s=0;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    if(a>0) s++;
	}
	cout<<boolalpha<<s;
}
