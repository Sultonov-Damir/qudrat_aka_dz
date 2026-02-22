#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,f;
	cin>>a>>b>>c;
	d=abs(a-c);
	f=abs(b-c);
	cout<<d<<" "<<f<<" "<<f*d;
}
