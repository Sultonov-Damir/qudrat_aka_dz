#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	bool h;
	cin>>a>>b;
	h=((a<0 and b<0) or (a>0 and b>0));
	cout<<boolalpha<<h;
}
