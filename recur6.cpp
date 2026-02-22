#include<iostream>
#include<cmath>
using namespace std;

int combin1(int,int);

int main()
{
	int x,n1,n2,n3,a;
	cin>>x>>n1>>n2>>n3;
	cout<<combin1(x,n1)<<" "<<endl;
	cout<<combin1(x,n2)<<" "<<endl;
	cout<<combin1(x,n3)<<" "<<endl;
}

int combin1(int x,int y)
{
	if(x==y or y==0)
	return 1;
	return combin1(x-1,y)+combin1(x-1,y-1);
}
