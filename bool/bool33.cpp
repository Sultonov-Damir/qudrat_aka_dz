#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	bool h;
	cin>>a>>b>>c;
	h=((a+b)>c and (a+c)>b and (c+b)>a);
	cout<<boolalpha<<h;
}
