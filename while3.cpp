#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c=0;
	cin>>a>>b;
	while(b<=a)
	{
		a=a-b;
		c++;
	}
	cout<<a<<" "<<c;
}
