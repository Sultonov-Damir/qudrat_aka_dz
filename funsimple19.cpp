#include<iostream>
#include<cmath>
using namespace std;

double ringS(int,int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b;
	cout<<ringS(a,b);
	
}

double ringS(int r,int r2)
{
	double s;
	s=3.1415*(r*r-r2*r2);
	return s;
}
