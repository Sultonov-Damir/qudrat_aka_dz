#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	bool h;
	cin>>a>>b>>c>>d;
	h=((a+b)%2==(c+d)%2);
	cout<<boolalpha<<h;
}
