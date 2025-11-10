#include<iostream>
#include<cmath>
using namespace std;

double cos1(double,double);

int main()
{
	int a,c,d,e;
	cin>>a;
	double b;
	for(int i=0;i<3;i++)
	{
		cin>>b;
		cout<<cos1(a,b)<<endl;
	}
	
}

double cos1(double a,double b)
{
	double t=1,s=1,i=0;
	while(b<abs(t))
	{
		i++;
		t*=a/i;
		i++;
		t*=(-a)/i;
		s+=t;
	}
	return s;
}
