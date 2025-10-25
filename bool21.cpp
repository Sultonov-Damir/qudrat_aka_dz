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
	h=(b==(a-1) and a==(c-1) and b==(c-2));
	cout<<boolalpha<<h;
}


