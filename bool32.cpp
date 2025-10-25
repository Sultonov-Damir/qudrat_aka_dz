#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	bool h;
	cin>>a>>b>>c;
	h=((a*a+b*b)==c*c or (a*a+c*c)==b*b or (c*c+b*b)==a*a);
	cout<<boolalpha<<h;
}
