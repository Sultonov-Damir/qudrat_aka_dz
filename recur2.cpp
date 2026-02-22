#include<iostream>
#include<cmath>
using namespace std;

int fact2(int a);

int main()
{
	int x,n,a;
	cin>>x>>n>>a;
	cout<<fact2(x)<<" "<<fact2(n)<<" "<<fact2(a);
}

int fact2(int a)
{
	if(a<2)
	return 1;
	return fact2(a-2)*a;
}
