#include<iostream>
#include<cmath>
using namespace std;

double leng(int,int,int,int);

int main()
{
	int a,b,c,d,e;
	cin>>a>>b;
	for(int i=0;i<3;i++)
	{
		cin>>c>>d;
		cout<<leng(a,b,c,d)<<endl;
	}
	
}

double leng(int x,int y,int x1,int y1)
{
	double a,b,c;
	b=(x-x1)*(x-x1);
	c=(y-y1)*(y-y1);
	a=sqrt(b+c);
	return a;
}

