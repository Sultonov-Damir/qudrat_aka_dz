#include<iostream>
#include<cmath>
using namespace std;
void rectPS(int a, int b, int &s, int &p)
{
	s=a*b;
	p=2*(a+b);
}
int main()
{
	int x,y,x1,y1,sA,sB,sC,pA,pB,pC;
	cin>>x>>y>>x1>>y1;
    rectPS(abs(x-x1),abs(y-y1),sA,pA);
	cout<<pA<<" "<<sA<<endl;
}
