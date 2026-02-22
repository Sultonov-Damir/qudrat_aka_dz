#include<iostream>
#include<cmath>
using namespace std;

double triangleP(int,int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b;
	cout<<triangleP(a,b);
	
}

double triangleP(int a,int b)
{
	double p,c;
	c=sqrt(a*a+b*b);
	p=c+a+b;
	return p;
}
