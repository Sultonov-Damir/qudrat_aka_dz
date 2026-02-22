#include<iostream>
#include<cmath>
using namespace std;

int sumRange(int,int);

int main()
{
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	cout<<sumRange(a,b)<<endl<<sumRange(b,c);
	
}

int sumRange(int a,int b)
{
	int s=0;
	if(a>=b) return 0;
	for(int i=a+1;i<b;i++)
	{
		s+=i;
	}
	return s;
}
