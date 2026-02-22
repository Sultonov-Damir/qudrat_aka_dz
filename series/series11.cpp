#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,e,f=1,t=0,k;
	bool s=0;
	cin>>t>>k;
	while(t--)
	{
	    cin>>a;
	    if(a<k) s++;
	}
	cout<<boolalpha<<s;
}
