#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b=0,c=1;
	cin>>a;
	while(a!=c)
	{
		c*=2;
		b++;
	}
	cout<<b;
}
