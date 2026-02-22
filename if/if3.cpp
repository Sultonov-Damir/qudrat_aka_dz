#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	if(a>0) a+=1;
	else if(a<0) a-=2;
	else a=10;
	cout<<a;
}
