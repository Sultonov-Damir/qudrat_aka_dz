#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,g,h;
	cin>>a>>b>>c>>d;
	if(a==b and a==c) g=4;
	else if(a==c and a==d) g=2;
	else if(b==d and c==d) g=1;
	else g=3;
	cout<<g;
}
