#include<iostream>
#include<cmath>
using namespace std;

int fib(int);

int main()
{
	int a,b,c,d,e;
	for(int i=0;i<1;i++)
	{
		cin>>a;
		cout<<fib(a)<<endl;
	}
	
}

int fib(int a)
{
	int s=1,i=1,f=0,f1=1,f2;
	
	while(a>i)
	{
		i++;
		f2=f+f1;
		f=f1;
		f1=f2;
	}
	return f1;
	
}
