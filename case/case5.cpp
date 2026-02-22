#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b=0,c;
	cin>>b>>c;
	cin>>a;
	switch(a)
	{
		case 1: cout<<b+c; break;
		case 2: cout<<b-c; break;
		case 3: cout<<b/c; break;
		case 4: cout<<b*c; break;
	}
}
