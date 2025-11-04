#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b=0,c=1,n=0,k,m,x,y;
	cin>>n>>m;
	while(n>0)
	{
		b++;
		n=n-m;
	}
	cout<<b<<" "<<n+m;
}
