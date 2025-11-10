#include<iostream>
#include<cmath>
using namespace std;

int ishora(int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b;
	cout<<ishora(a)+ishora(b);
	
}

int ishora(int a)
{
	int b=0;
	if(a>0) b=1;
	else if(a<0) b=-1;
	return b;
}
