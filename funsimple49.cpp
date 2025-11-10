#include<iostream>
#include<cmath>
using namespace std;

int ekub3(int,int,int);

int main()
{
	int a,c,d,e,b;
	cin>>a>>b>>c>>d;
	cout<<ekub3(a,b,c)<<endl;
	cout<<ekub3(a,d,c)<<endl;
	cout<<ekub3(a,b,d)<<endl;
	
}

int ekub3(int x,int a,int b)
{
	int t=1,s=0,i=0;
	if(x<a) swap(a,x);
	while(x%=a)
	{
		swap(x,a);
	}
	if(a==0) a=1;
	if(a>b) swap(a,b);
	while(b%=a)
	{
		swap(b,a);
	}
	return a;
}
