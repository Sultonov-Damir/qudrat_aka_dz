#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,s=2,b=1,c=1,n=0,k,m,x,y;
	string str;
	cin>>a;
	while(a>n)
	{
		s++;
		n=b+c;
		c=b;
		b=n;
	}
	cout<<s;
}
