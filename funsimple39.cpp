#include<iostream>
#include<cmath>
using namespace std;

int power1(int,int);
double power2(int, int);
double power3(int, double);

int main()
{
	int a,c,d,e;
	double b;
	cin>>a;
	for(int i=0;i<3;i++)
	{
		cin>>b;
		cout<<power3(a,b)<<endl;
	}
	
}

double power3(int a,double b)
{
	if(b==ceil(b))
	{
		return power1(a,b);
	}
	else return power2(a,b);
	
}

int power1(int a,int b)
{
	int s=0,i=1;
	while(b>s)
	{
		s++;
		i=i*a;
	}
	return i;
	
}

double power2(int a,int b)
{
	double s=0,i=1;
	while(b>s)
	{
		s++;
		i=i*a;
	}
	if(a<0) i=1/i; 
	return i;
	
}
