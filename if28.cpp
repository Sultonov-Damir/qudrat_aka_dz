#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,g,h;
	cin>>a;
	if(a%4==0 and a%100!=0) cout<<366;
	else if(0==a%400) cout<<366;
	else cout<<365;
}
