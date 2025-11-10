#include<iostream>
#include<cmath>
using namespace std;

void shiftRight3(int &, int &, int &);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	shiftRight3(a,b,c);
	cout<<a<<" "<<b<<" "<<c<<endl;
	cin>>a1>>b1>>c1;
	shiftRight3(a1,b1,c1);
	cout<<a1<<" "<<b1<<" "<<c1<<endl;
	
}

void shiftRight3(int &x, int &y, int &z)
{
	int a=z;
	z=y;
	y=x;
	x=a;
}
