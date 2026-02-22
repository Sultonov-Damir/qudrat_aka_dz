#include<iostream>
#include<cmath>
using namespace std;

void frac1(int,int,int &,int &);

int main()
{
	int a,c,d=0,e=0,j;
	cin>>a;
	int b;
	for(int i=0;i<3;i++)
	{
		cin>>b;
		frac1(a,b,d,j);
		cout<<d<<" "<<j<<endl;
	}
	
}

void frac1(int x,int a,int &p,int &q)
{
	int i=0;
	p=x;q=a;
	if(x<a) swap(a,x);
	while(x%=a)
	{
		swap(x,a);
	}
	if(a==0) a=1;
	p/=a;
	q/=a;
}
