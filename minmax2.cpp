#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,s,n,m,i=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		if(i==0) c=b*a;
		if(c>b*a) c=b*a;
	}
	cout<<c;
}
