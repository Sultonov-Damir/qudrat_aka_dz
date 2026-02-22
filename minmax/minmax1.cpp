#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,s,n,m,i=0;
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>b;
		if(i==0)
		{
			c=b;
			s=b;
		}
		if(c>b) c=b;
		if(s<b) s=b;
	}
	cout<<s<<" "<<c;
}
