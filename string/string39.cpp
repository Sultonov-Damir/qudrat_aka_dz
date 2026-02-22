#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0,n1=0,n2;
	char ch;
	string str="",s1,s2,s3;
	getline(cin,s1);
	a=s1.find(" ");
	s1.erase(0,a+1);
	a=s1.find(" ");
	if(a==-1)
	s1=" ";
	else
	s1.erase(a);
	cout<<s1;
}
