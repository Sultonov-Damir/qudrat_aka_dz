#include<iostream>
#include<cmath>
using namespace std;

double leng(int,int,int,int);
double perim(int,int,int,int,int,int);
double area(int,int,int,int,int,int);
double dist(int,int,int,int,int,int);

int main()
{
	int xa,ya,xb,yb,xc,yc,xp,yp,e;
	cin>>xa>>ya>>xb>>yb;
	cin>>xc>>yc>>xp>>yp;
	cout<<dist(xa,ya,xb,yb,xp,yp)<<endl;
	cout<<dist(xa,ya,xc,yc,xp,yp)<<endl;
	cout<<dist(xb,yb,xc,yc,xp,yp)<<endl;
}

double dist(int x,int y,int x1,int y1,int x2,int y2)
{
	double s=0,c=0,h=0;
	s=area(x,y,x1,y1,x2,y2);
	c=leng(x,y,x1,y1);
	h=2*s/c;
	return h;
}

double area(int x,int y,int x1,int y1,int x2,int y2)
{
	double s=0,p=0,a,b,c;
	a=leng(x,y,x1,y1);
	b=leng(x1,y1,x2,y2);
	c=leng(x,y,x2,y2);
	p=perim(x,y,x1,y1,x2,y2)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
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
