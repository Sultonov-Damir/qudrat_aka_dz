#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0;
	char ch;
	string str="",st="";
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		a=a*10+(str[i]-'0');
	}
	str="";
	do
	{
		str=char(a%2+'0')+str;
		a=a/2;
	}
	while(a>0);
	cout<<str;
}
