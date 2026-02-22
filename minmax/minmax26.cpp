#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,v=0,m=0,n,s=0,x=0,y=0,sum=0,z;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a%2==0)
		{
			
			x++;
		}
		else x=0;
		if(x>s) s=x;
	}
	cout<<s;
}
