#include<iostream>
#include<cmath>
using namespace std;

int power1(int, int);

int main()
{
	int a,b,c,d,e;
	cin>>b;
	for(int i=0;i<4;i++)
	{
		cin>>a;
		cout<<power1(a,b)<<endl;
	}
	
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
