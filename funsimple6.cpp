#include<iostream>
#include<cmath>
using namespace std;

void digitCountSum(int, int &, int &);


int main()
{
	int a,b,c,sA,sB,sC,cA,cB,cC;
	cin>>a>>b>>c;
	digitCountSum(a,sA,cA);
	digitCountSum(b,sB,cB);
	digitCountSum(c,sC,cC);
	cout<<sA<<" "<<cA<<endl;
	cout<<sB<<" "<<cB<<endl;
	cout<<sC<<" "<<cC<<endl;
	
}


void digitCountSum(int a, int &s, int &c)
{
	s=0;c=0;
	while(a>0)
	{
		s+=a%10;
		a=a/10;
		c++;
	}
}
