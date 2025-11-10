#include<iostream>
#include<cmath>
using namespace std;

void incTime(int,int&,int&,int&);

int main()
{
	int t,t2,t3,h,m,s;
	cin>>t>>h>>m>>s;
	incTime(t,h,m,s);
	cout<<h<<":"<<m<<":"<<s<<endl;
}

void incTime(int a,int &b, int &c, int &d)
{
	d+=a%60;
	c+=a%3600/60;
	b+=a/3600;
}
