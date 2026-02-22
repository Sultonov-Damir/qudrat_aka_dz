#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,g,h;
	cin>>a;
	if(a/10==0) cout<<"bir";
	else if(a/100==0) cout<<"ikki";
	else cout<<"uch";
	cout<<" xonali ";
	if(a%2==0) cout<<"juft son";
	else cout<<"toq son";
}
