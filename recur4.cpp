#include<iostream>
#include<cmath>
using namespace std;

int s;

int fib1(int x);


int main()
{
	int x,n1,n2,n3,a;
	cin>>x>>n1>>n2;
	cout << fib1(x) << " " << s << " ";
	s=0;
	cout<<fib1(n1)<<" "<<s<<" ";
	s=0;
	cout<<fib1(n2)<<" "<<s;
}

int fib1(int x)
{
	s++;

	if(x==1 or x==2)
	return 1;
	else
	return fib1(x-1)+fib1(x-2);    
}
