#include<iostream>
#include<cmath>
using namespace std;

int ekuk(int,int);

int main()
{
	int a,c,d,e;
	cin>>a;
	int b;
	for(int i=0;i<3;i++)
	{
		cin>>b;
		cout<<ekuk(a,b)<<endl;
	}
	
}

int ekuk(int x,int a)
{
	int t=x*a,s=0,i=0;
	if(x<a) swap(a,x);
	if(a!=0)
	while(x%=a)
	{
		swap(x,a);
	}
	else return 0;
	if(a==0) a=1;
	s=t/a;
	return s;
}
