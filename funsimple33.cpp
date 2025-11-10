#include<iostream>
#include<cmath>
using namespace std;

double radToDeg(double);

int main()
{
	int a,b,c,d,e;
	for(int i=0;i<3;i++)
	{
		cin>>a;
		cout<<radToDeg(a)<<endl;
	}
	
}

double radToDeg(double a)
{
	double s=0,f=a;
	s=(a*180)/3.14;
	return s;
	
}
