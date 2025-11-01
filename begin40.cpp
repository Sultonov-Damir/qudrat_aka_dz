#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,a2,b2,c2,d,v,u,t1,t2;
	cin>>a>>b>>c>>a2>>b2>>c2;
	d=(a*b2-a2*b);
	cout<<(c*b2-c2*b)/d<<" "<<(a*c2-a2*c)/d;

}
