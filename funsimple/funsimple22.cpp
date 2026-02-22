#include<iostream>
#include<cmath>
using namespace std;

int calc(int,int,int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	cout<<calc(a,b,c);
	
}

int calc(int a,int b,int c)
{
	int s=0;
	switch(c)
	{
		case 1: s=a-b;
		break;
		case 2: s=a*b;
		break;
		case 3: s=a/b;
		break;
		default : s=a+b;
	}
	return s;
	
}
