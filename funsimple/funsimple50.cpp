#include<iostream>
#include<cmath>
using namespace std;

void timeToHMS(int,int&,int&,int&);

int main()
{
	int t,t2,t3,h,m,s;
	cin>>t>>t2>>t3;
	timeToHMS(t,h,m,s);
	cout<<h<<":"<<m<<":"<<s<<endl;
	timeToHMS(t2,h,m,s);
	cout<<h<<":"<<m<<":"<<s<<endl;
	timeToHMS(t3,h,m,s);
	cout<<h<<":"<<m<<":"<<s<<endl;
}

void timeToHMS(int a,int &b, int &c, int &d)
{
	d=a%60;
	c=a%3600/60;
	b=a/3600;
}
