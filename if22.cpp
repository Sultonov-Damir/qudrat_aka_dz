#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,g,h;
	cin>>a>>b;
	if(a>0 and b>0) g=1;
	else if(a<0 and b>0) g=2;
	else if(b<0 and a<0) g=3;
	else g=4; 
	cout<<g;
}
