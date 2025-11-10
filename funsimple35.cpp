#include<iostream>
#include<cmath>
using namespace std;

int fact2(int);

int main()
{
	int a,b,c,d,e;
	for(int i=0;i<3;i++)
	{
		cin>>a;
		cout<<fact2(a)<<endl;
	}
	
}

int fact2(int a)
{
	int s=1,f=0;
	while(a>1)
	{
		s*=a;
		a-=2;
	}
	return s;
	
}
