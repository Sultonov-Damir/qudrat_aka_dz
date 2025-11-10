#include<iostream>
#include<cmath>
using namespace std;

int invertDigit(int);


int main()
{
	int a,b,c,sA,sB,sC,cA,cB,cC;
	cin>>a>>b>>c;	
	cout<<invertDigit(a)<<endl;
	cout<<invertDigit(b)<<endl;
	cout<<invertDigit(c)<<endl;
	
}


int invertDigit(int a)
{
	int s=0;
	while(a>0)
	{
		s*=10;
		s+=a%10;
		a=a/10;
	}
	return s;
}
