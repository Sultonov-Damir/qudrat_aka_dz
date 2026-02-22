#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b=0,c=1,n=0,k,m,x,y;
	cin>>a;
	while(a>=b)
	{
		n++;
		b+=1/n;
	}
//	b=b-1/n;
//	n--;
	cout<<n<<" "<<b;
}
