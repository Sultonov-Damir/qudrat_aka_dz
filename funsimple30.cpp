#include<iostream>
#include<cmath>
using namespace std;

int digitN(int,int);

int main()
{
	int a,b,c,d,e;
	cin>>b;
	for(int i=0;i<3;i++)
	{
		cin>>a;
		cout<<digitN(a,b)<<endl;
	}
	
}

int digitN(int a,int b)
{
	int s=0,i=0,f=a;
	while(0<f)
	{
		s++;
		f/=10;
	}
	if(s<b) return -1;
	while(s-b>=i)
	{
		i++;
		f=a%10;
		a/=10;
	}
	return f;
	
}
