#include<iostream>
#include<cmath>
using namespace std;

double arctg1(double,double);

int main()
{
	double a,c,d,e;
	cin>>a;
	double b;
	for(int i=0;i<3;i++)
	{
		cin>>b;
		cout<<arctg1(a,b)<<endl;
	}
	
}

double arctg1(double a,double b)
{
	double t=a,s=0,i=1;
	while(b<abs(t/i))
	{
		s+=t/i;
		t*=(-a*a);
		i+=2;
	}
	return s;
}
