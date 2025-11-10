#include<iostream>
#include<cmath>
using namespace std;

int root(int,int,int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	cout<<root(a,b,c);
	
}

int root(int a,int b,int c)
{
	int d=b*b-4*a*c;
	if(d==0) return 1;
	else if(d>0) return 2;
}
