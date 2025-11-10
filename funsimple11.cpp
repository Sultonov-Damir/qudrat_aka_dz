#include<iostream>
#include<cmath>
using namespace std;

void minMax(int &, int&);


int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;	
    minMax(a,b);
    minMax(c,d);
    minMax(a,c);
    minMax(b,d);
	cout<<a<<" "<<d<<endl;
}


void minMax(int &x,int &y)
{
	if(x>y) swap(x,y);
}
