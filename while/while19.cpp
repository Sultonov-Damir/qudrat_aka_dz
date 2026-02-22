#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,s=0,b=0,c=1,n=0,k,m,x,y;
	string str;
	cin>>n;
	while(n>0)
	{
		s++;
		a=n%10;
		b+=a;
		n=n/10;
	}
	cout<<s<<" "<<b;
}
