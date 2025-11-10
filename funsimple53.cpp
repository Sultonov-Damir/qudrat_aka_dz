#include<iostream>
#include<cmath>
using namespace std;

bool isLeapYear(int);
int monthDays(int,int);

int main()
{
	int t,t2,t3,h,m,s;
	cin>>h;
	for(int i=0;i<3;i++)
	{
	    cin>>t;
	    cout<<monthDays(t,h);
	}
}

int monthDays(int m,int y)
{
	int d;
	switch(m)
	{
		case 1: case 3: case 5: case 8: case 7: case 10: case 12: d=31;
		break;
		case 2: d=28+isLeapYear(y); 
		break;
		default: d=30;  
	}
	return d;
}

bool isLeapYear(int a)
{
	if((a%4==0 and a%100!=0) or a%400==0)
	{
		a=1;
	}
	else a=0;
	return a;
}
