#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,s=2,b,c,n=0,k=3,m,x,y;
	string str;
	cin>>a>>b>>c;
	int counta=0,countb=0;
	while(a>=c)
	{
		a-=c;
		counta++;
	}
	while(b>=c)
	{
		b-=c;
		countb++;
	}
	while(counta--)
	{
		n+=countb;
	}
	cout<<n;
}
