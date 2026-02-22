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
		a=a+pow(2,i)*(str[str.size()-1-i]-'0');
	}
	str="";
	while(a>0)
	{
		str=char(a%10+'0')+str;
		a=a/10;
	}
	cout<<str;
}
