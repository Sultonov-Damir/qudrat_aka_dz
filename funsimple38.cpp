#include<iostream>
#include<cmath>
using namespace std;

double power2(int, int);

int main()
{
	int a,b,c,d,e;
	cin>>a;
	for(int i=0;i<3;i++)
	{
		cin>>b;
		cout<<power2(a,b)<<endl;
	}
	
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
