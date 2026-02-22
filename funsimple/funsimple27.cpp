#include<iostream>
#include<cmath>
using namespace std;

bool isPowerN(int,int);

int main()
{
	int a,b,c,d,e;
	cin>>a>>b;
	cout<<boolalpha<<isPowerN(a,b)<<endl;
	cin>>a>>b;
	cout<<boolalpha<<isPowerN(a,b)<<endl;
	cin>>a>>b;
	cout<<boolalpha<<isPowerN(a,b)<<endl;
	cin>>a>>b;
	cout<<boolalpha<<isPowerN(a,b)<<endl;
	cin>>a>>b;
	cout<<boolalpha<<isPowerN(a,b)<<endl;	
}

bool isPowerN(int a, int b)
{
	int s=0,i=1;
	while(i<a) i*=b;
	if(i==a) s=1;
	return s;
	
}
