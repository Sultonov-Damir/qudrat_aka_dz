#include<iostream>
#include<cmath>
using namespace std;

bool isPower5(int);

int main()
{
	int a,b,c,d,e,b1,c1;
	cin>>a>>b>>c>>d>>e;
	cout<<boolalpha<<isPower5(a)<<endl<<isPower5(b)<<endl<<isPower5(c)<<endl<<isPower5(d)<<endl<<isPower5(e);	
}

bool isPower5(int a)
{
	int s=0,i=1;
	while(i<a) i*=5;
	if(i==a) s=1;
	return s;
	
}
