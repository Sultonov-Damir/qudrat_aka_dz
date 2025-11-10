#include<iostream>
#include<cmath>
using namespace std;

double ln1(double,double);

int main()
{
	double a,c,d,e;
	cin>>a;
	double b;
	for(int i=0;i<3;i++)
	{
		cin>>b;
		cout<<ln1(a,b)<<endl;
	}
	
}

double ln1(double a,double b)
{
	double t=a,s=0,i=1;
	while(b<abs(t/i))
	{
		s+=t/i;
		t*=(-a);
		i++;
	}
	return s;
}
