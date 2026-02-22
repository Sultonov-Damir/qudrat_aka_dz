#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b=0,c=1,n=0,k,m,x,y;
	cin>>a;
	while(a>=c)
	{
		c*=3;
		n++;
	}
	cout<<n;
}
