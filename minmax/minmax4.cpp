#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,s=1,n,m,i=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(i==1) c=a;
		if(c>a)
		{
			c=a;
			s=i;
		}
	}
	cout<<s;
}
