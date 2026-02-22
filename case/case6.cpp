#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,c;
	int b;
	cin>>b>>c;
	switch(b)
	{
		case 1: cout<<c/10; break;
		case 2: cout<<c*1000; break;
		case 3: cout<<c; break;
		case 4: cout<<c/1000; break;
		case 5: cout<<c/100; break;
	}
}
