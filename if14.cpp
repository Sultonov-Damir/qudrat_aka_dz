#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d=0,g=0;
	cin>>a>>b>>c;
	if(a<b and a<c) d=a;
	else if(b<a and b<c) d=b;
	else d=c;
	if(a>b and a>c) g=a;
	else if(b>a and b>c) g=b;
	else g=c;
	cout<<d<<" "<<g;
}
