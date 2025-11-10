#include<iostream>
#include<cmath>
using namespace std;

double square(int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a;
	cout<<square(a)<<endl;
	cin>>b;
	cout<<square(b)<<endl;
	cin>>b;
	cout<<square(b)<<endl;
}

double square(int r)
{
	double s;
	s=3.1415*r*r;
	return s;
}
