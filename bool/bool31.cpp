#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	bool h;
	cin>>a>>b>>c;
	h=((a==b and b!=c) or (a!=b and b==c) or (c==b and a!=c));
	cout<<boolalpha<<h;
}
