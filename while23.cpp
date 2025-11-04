#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,s=0,b=0,c=1,n=0,k,m,x,y;
	string str;
	cin>>a>>b;
    if(a<b) swap(a,b);
	while(a%=b)
	{
		swap(a,b);
	}
	if(b==0) b=1;
	cout<<b;
}
