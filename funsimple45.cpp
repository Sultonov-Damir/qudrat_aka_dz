#include<iostream>
#include<cmath>
using namespace std;

double power4(double,double,double);

int main()
{
	double a,c,d,e;
	cin>>a>>c;
	double b;
	for(int i=0;i<3;i++)
	{
		cin>>b;
		cout<<power4(a,c,b)<<endl;
	}
	
}

double power4(double x,double a,double b)
{
	double t=1,s=0,i=0;
	while(b<abs(t))
	{
		s+=t;
		t*=(a-i)*x/(i+1);
		i++;
	}
	return s;
}
