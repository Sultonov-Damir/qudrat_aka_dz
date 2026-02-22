#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,x1,y1,x2,y2;
	bool h;
	cin>>x>>y>>x1>>y1>>x2>>y2;
	h=((x>x1 and y<y1) and (x<x2 and y>y2));
	cout<<boolalpha<<h;
}
