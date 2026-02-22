#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,v,m,n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(s==0)
		{
			s++;
			c=a;
		}
		if(c>a)
		{
			s=i;
			c=a;
		}
	}
	cout<<s-1;
}
