#include<iostream>
#include<cmath>
using namespace std;

bool isSquare(int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	cout<<boolalpha<<isSquare(a)<<endl<<isSquare(b)<<endl<<isSquare(c);	
}

bool isSquare(int a)
{
	int s=0,i=1;
	while(i*i<a) i++;
	if(i*i==a) s=1;
	return s;
	
}
