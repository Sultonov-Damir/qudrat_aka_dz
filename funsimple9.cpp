#include<iostream>
#include<cmath>
using namespace std;

void addLeftDigit(int &, int);


int main()
{
	int a,b,c,sA,sB,sC,cA,cB,cC;
	cin>>a>>b;	
    addLeftDigit(a,b);
	cout<<a<<endl;
	
}


void addLeftDigit(int &k,int r)
{
	int s=k;
	while(s>0)
	{
		s=s/10;
		r*=10;
	}
	k=k+r;
}
