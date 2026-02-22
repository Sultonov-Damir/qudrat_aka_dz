#include<iostream>
#include<cmath>
using namespace std;

int digitCount(int);

int main()
{
	int a,b,c,d,e;
	
	for(int i=0;i<5;i++)
	{
		cin>>a;
		cout<<digitCount(a)<<endl;
	}
	
}

int digitCount(int a)
{
	int s=0,i=2;
	while(0<a)
	{
		s++;
		a/=10;
	}
	return s;
	
}
