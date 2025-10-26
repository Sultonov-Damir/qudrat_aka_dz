#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d=0,g=0;
	cin>>a>>b>>c;
	if(a<b and a<c) d=a;
	else if(a>b and c>b) d=b;
	cout<<a+b+c-d;
}
