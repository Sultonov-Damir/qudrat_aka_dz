#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	bool h;
	cin>>a>>b>>c>>d;
	h=((abs(a-c)==1 or abs(b-d)==1));
	cout<<boolalpha<<h;
}
