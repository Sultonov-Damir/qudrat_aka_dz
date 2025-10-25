#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	bool h;
	cin>>a>>b>>c;
	h=((b*b-4*a*c)>=0);
	cout<<boolalpha<<h;
}


