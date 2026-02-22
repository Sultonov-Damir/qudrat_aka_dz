#include<iostream>
#include<cmath>
using namespace std;

bool isPalindrom(int);

int main()
{
	int a,b,c,d,e;
	for(int i=0;i<5;i++)
	{
		cin>>a;
		cout<<boolalpha<<isPalindrom(a)<<endl;
	}
	
}

bool isPalindrom(int a)
{
	int s=0,i=0,l=0,f=a;
	while(f>0)
	{
		s++;
		f/=10;
	}
	while(s/2>i)
	{
		i++;
		l*=10;
		l+=a%10;
		a/=10;
	}
	if(s%2!=0) a/=10;
	if(a==l) return 1;
	return 0; 
	
}
