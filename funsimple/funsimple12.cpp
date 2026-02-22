#include<iostream>
#include<cmath>
using namespace std;

void sortInc3(int &, int &, int &);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	sortInc3(a,b,c);
	cout<<a<<" "<<b<<" "<<c<<endl;
	cin>>a1>>b1>>c1;
	sortInc3(a1,b1,c1);
	cout<<a1<<" "<<b1<<" "<<c1<<endl;
	
}

void sortInc3(int &x, int &y, int &z)
{
	if(x>y) swap(x,y);
	if(x>z) swap(x,z);
	if(y>z) swap(y,z);
}
