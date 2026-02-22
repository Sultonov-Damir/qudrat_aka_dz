#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b=0,c=1,n=0,k,m,x,y;
	cin>>a>>k;
	b=a;
	c+=k/100;
	while(2*a>=b)
	{
		n++;
		b*=c;
	}
	cout<<n<<" "<<b;
}
