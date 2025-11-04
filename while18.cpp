#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b=0,c=1,n=0,k,m,x,y;
	string str;
	cin>>n;
	while(n>0)
	{
		a=n%10;
		n=n/10;
		str+=a+48;
	}
	cout<<str;
}
