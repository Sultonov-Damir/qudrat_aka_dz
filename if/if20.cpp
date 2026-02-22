#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,g,h;
	cin>>a>>b>>c;
	g=abs(a-c);
	if(g>abs(a-b))
	{
		c=b;
		g=abs(a-b);
	} 
	cout<<c<<" "<<g;
}
