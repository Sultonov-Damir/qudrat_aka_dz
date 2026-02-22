#include<iostream>
#include<cmath>
using namespace std;

int fact(int a);

int main()
{
	int x,n,a;
	cin>>x>>n>>a;
	cout<<fact(x)<<" "<<fact(n)<<" "<<fact(a);
}

int fact(int a)
{
	if(a<1)
	return 1;
	return fact(a-1)*a;
}
