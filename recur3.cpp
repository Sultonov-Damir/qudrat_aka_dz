#include<iostream>
#include<cmath>
using namespace std;

double powerN(double a,int x);

int main()
{
	int x,n1,n2,n3,a;
	cin>>x>>n1>>n2>>n3;
	cout<<powerN(x,n1)<<" "<<powerN(x,n2)<<" "<<powerN(x,n3);
}

double powerN(double a,int x)
{
    if(x<0)
    return 1.0/powerN(a,-x);
	if(x==0)
	return 1;
	return powerN(a,x-1)*a;
}
