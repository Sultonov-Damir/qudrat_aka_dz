#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int);

int main()
{
	int a,b,c,d,e;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		cout<<boolalpha<<isPrime(b)<<endl;
	}
}

bool isPrime(int a)
{
	int s=0,i=2;
	while(i<a)
	{
		if(a%i==0) s++;
		i++;
	}
	if(s>0) s=0;
	else if(s==0) s=1;
	return s;
	
}
