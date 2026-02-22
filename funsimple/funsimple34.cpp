#include<iostream>
#include<cmath>
using namespace std;

int fact(int);

int main()
{
	int a,b,c,d,e;
	for(int i=0;i<3;i++)
	{
		cin>>a;
		cout<<fact(a)<<endl;
	}
	
}

int fact(int a)
{
	int s=1,f=0;
	while(a>f)
	{
		f++;
		s*=f;
	}
	return s;
	
}
