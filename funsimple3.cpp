#include<iostream>
#include<cmath>
using namespace std;
void mean(double a, double b, double &arif, double &geom)
{
	arif=(a+b)/2;
	geom=sqrt(a*b);
}
int main()
{
	double a,b,c,d,arifB,arifC,arifD,geomB,geomC,geomD;
	cin>>a>>b>>c>>d;
	mean(a,b,arifB,geomB);
	mean(a,c,arifC,geomC);
	mean(a,d,arifD,geomD);
	cout<<arifB<<" "<<geomB<<endl;
	cout<<arifC<<" "<<geomC<<endl;
	cout<<arifD<<" "<<geomD<<endl;
}
