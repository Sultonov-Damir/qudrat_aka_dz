#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b=0,c=1,n=1,k,m,x,y;
	cin>>a;
	while(a>1)
	{
		n*=a;
		a-=2;
	}
	cout<<n;
}
