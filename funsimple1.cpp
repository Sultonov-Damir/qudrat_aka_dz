#include<iostream>
#include<cmath>
using namespace std;
void powerA3(int &a)
{
	a=a*a*a;
}
void powerA3(double &a)
{
    a=a*a*a;
}
int main()
{
	double a,b,c;
	int d,e;
	cin>>a>>b>>c>>d>>e;
	powerA3(a);
	powerA3(b);
	powerA3(c);
	powerA3(d);
	powerA3(e);
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
}
