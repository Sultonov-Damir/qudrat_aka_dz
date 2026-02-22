#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d=0,g=0;
	cin>>a>>b>>c;
	if((a>b and b>c) or (c>b and b>a)) c=b;
	else if((b>a and a>c) or (c>a and a>b)) c=a;
	cout<<c;
}
