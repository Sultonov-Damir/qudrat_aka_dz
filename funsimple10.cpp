#include<iostream>
#include<cmath>
using namespace std;

void Swap(int &, int&);


int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;	
    Swap(a,b);
    Swap(d,c);
	cout<<a<<" "<<b<<endl;
	cout<<c<<" "<<d<<endl;
}


void Swap(int &k,int &r)
{
	int a=r;
	r=k;
	k=a;
}
