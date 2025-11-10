#include<iostream>
#include<cmath>
using namespace std;

void shiftLeft3(int &, int &, int &);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	shiftLeft3(a,b,c);
	cout<<a<<" "<<b<<" "<<c<<endl;
	cin>>a1>>b1>>c1;
	shiftLeft3(a1,b1,c1);
	cout<<a1<<" "<<b1<<" "<<c1<<endl;
	
}

void shiftLeft3(int &x, int &y, int &z)
{
	int a=x;
	x=y;
	y=z;
	z=a;
}
