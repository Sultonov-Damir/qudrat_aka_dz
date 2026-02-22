#include<iostream>
#include<cmath>
using namespace std;

int s[100] = {0, 1 ,1},count;

int fib2(int x);
void delet(int x);

int main()
{
	int x,n1,n2,n3,a;
	cin>>x>>n1>>n2;
	cout<<fib2(x)<<" "<<count<<endl;
	delet(x);
	count=0;
	cout<<fib2(n1)<<" "<<count<<endl;
	delet(n1);
	count=0;
	cout<<fib2(n2)<<" "<<count<<endl;
}

int fib2(int x)
{
	count++;
	if(s[x]==0)
	{
		s[x]=fib2(x-1)+fib2(x-2);
		return s[x];
	}
	return s[x];
}
void delet(int x)
{
	for(int i=3;i<=x;i++)
	{
		s[i]=0;
	}
}
