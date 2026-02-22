#include<iostream>
#include<cmath>
using namespace std;
double ds(int x1, int y1, int x2, int y2)
{
	double s=0,a,b;
	a=pow(abs(x1-x2),2);
	b=pow(abs(y1-y2),2);
	s=sqrt(a+b);
	return s;
}
int main()
{
	double a,b,c,d,f,x1,x2,y1,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a=ds(x1,y1,x2,y2);
	b=ds(x1,y1,x3,y3);
	c=ds(x2,y2,x3,y3);
	d=(a+b+c)/2;
	f=sqrt(d*(d-a)*(d-b)*(d-c));
	cout<<f;
}
