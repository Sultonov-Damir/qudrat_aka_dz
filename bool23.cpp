#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	bool h;
	cin>>a;
	b=a/100;
	c=a%10;
	a=a/10%10;
	h=(b==a);
	cout<<boolalpha<<h;
}


