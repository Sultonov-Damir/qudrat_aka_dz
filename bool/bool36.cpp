#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	bool h;
	cin>>a>>b>>c>>d;
	h=((a==c and d!=b) or (a!=c and d==b));
	cout<<boolalpha<<h;
}
