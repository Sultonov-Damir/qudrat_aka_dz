#include<iostream>
#include<cmath>
using namespace std;

double leng(int,int,int,int);
double perim(int,int,int,int,int,int);

int main()
{
	int xa,ya,xb,yb,xc,yc,xd,yd,e;
	cin>>xa>>ya>>xb>>yb;
	cin>>xc>>yc>>xd>>yd;
	cout<<perim(xa,ya,xb,yb,xc,yc)<<endl;
	cout<<perim(xa,ya,xb,yb,xd,yd)<<endl;
	cout<<perim(xa,ya,xc,yc,xd,yd)<<endl;
}

double perim(int x,int y,int x1,int y1,int x2,int y2)
{
	double s=0;
	s=leng(x,y,x1,y1)+leng(x1,y1,x2,y2)+leng(x,y,x2,y2);
	return s;
}

double leng(int x,int y,int x1,int y1)
{
	double a,b,c;
	b=(x-x1)*(x-x1);
	c=(y-y1)*(y-y1);
	a=sqrt(b+c);
	return a;
}

