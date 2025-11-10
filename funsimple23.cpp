#include<iostream>
#include<cmath>
using namespace std;

int quarter(int,int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b;
	cout<<quarter(a,b);
	
}

int quarter(int a,int b)
{
	int s=1;
	if(a>0 and b<0) s=4;
	else if(a<0 and b>0) s=2;
	else if(a<0 and b<0) s=3;
	
	return s;
	
}
