#include<iostream>
#include<cmath>
using namespace std;

bool even(int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	cout<<boolalpha<<even(a)<<endl<<even(b)<<endl<<even(c);	
}

bool even(int a)
{
	int s=0;
	if(a%2==0) s=1;
	return s;
	
}
