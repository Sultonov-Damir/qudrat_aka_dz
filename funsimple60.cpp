#include<iostream>
#include<cmath>
using namespace std;

double leng(int,int,int,int);
double perim(int,int,int,int,int,int);
double area(int,int,int,int,int,int);
double dist(int,int,int,int,int,int);
void heights(int,int,int,int,int,int,double&,double&,double&);

int main()
{
	int xa,ya,xb,yb,xc,yc,xp,yp,e;
	double ha,hb,hc;
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	heights(xa,ya,xb,yb,xc,yc,ha,hb,hc);
	cout<<ha<<" "<<hb<<" "<<hc<<endl;
}

void heights(int x,int y,int x1,int y1,int x2,int y2,double &ha,double &hb,double &hc)
{
	ha=dist(x2,y2,x1,y1,x,y);
	hb=dist(x,y,x2,y2,x1,y1);
	hc=dist(x,y,x1,y1,x2,y2);
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
