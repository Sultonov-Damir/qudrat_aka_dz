#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c;
	d=(a/c)*(b/c);
	cout<<d<<" "<<a*b-d*c*c;
}
