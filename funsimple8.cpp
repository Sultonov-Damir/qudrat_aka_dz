#include<iostream>
#include<cmath>
using namespace std;

int addRightDigit(int, int);


int main()
{
	int a,b,c,sA,sB,sC,cA,cB,cC;
	cin>>a>>b;	
	cout<<addRightDigit(a,b)<<endl;
	
}


int addRightDigit(int k,int r)
{
	k=k*10+r;
	return k;
}
