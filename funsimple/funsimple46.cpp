#include<iostream>
#include<cmath>
using namespace std;

int ekub(int,int);

int main()
{
	int a,c,d,e;
	cin>>a;
	int b;
	for(int i=0;i<3;i++)
	{
		cin>>b;
		cout<<ekub(a,b)<<endl;
	}
	
}

int ekub(int x,int a)
{
	int t=1,s=0,i=0;
	if(x<a) swap(a,x);
	while(x%=a)
	{
		swap(x,a);
	}
	if(a==0) a=1;
	return a;
}
