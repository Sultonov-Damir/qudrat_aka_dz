#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0,n1=0,n2;
	char ch;
	string str="",s1,s2;
	cin>>s1>>s2;
	while(a!=-1)
	{
	   a=s1.find(s2,a);
	   if(a!=-1) n1++;
	   s1.erase(0,a+s2.size());
	}
	cout<<n1;
}
