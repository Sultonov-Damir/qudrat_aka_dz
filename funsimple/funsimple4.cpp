#include<iostream>
#include<cmath>
using namespace std;
void triangle(double a,double &s, double &per)
{
	s=sqrt(3)*a*a/4;
	per=3*a;
}
int main()
{
	double a,b,c,sA,sB,sC,pA,pB,pC;
	cin>>a>>b>>c;
    triangle(a,sA,pA);
    triangle(b,sB,pB);
    triangle(c,sC,pC);
	cout<<pA<<" "<<sA<<endl;
	cout<<pB<<" "<<sB<<endl;
	cout<<pC<<" "<<sC<<endl;
}
