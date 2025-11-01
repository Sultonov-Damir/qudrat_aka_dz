#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,v,u,t1,t2;
	cin>>a>>b>>c;
	u=b*b-4*a*c;
	if((u)>0)
	{
		cout<<(-b-sqrt(u))/(2*a)<<" "<<(-b+sqrt(u))/(2*a);
	}
	else cout<<0;

}
