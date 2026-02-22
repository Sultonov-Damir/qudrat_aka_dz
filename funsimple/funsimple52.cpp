#include<iostream>
#include<cmath>
using namespace std;

bool isLeapYear(int);

int main()
{
	int t,t2,t3,h,m,s;
	for(int i=0;i<5;i++)
	{
	    cin>>t;
	    cout<<boolalpha<<isLeapYear(t);
	}
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
