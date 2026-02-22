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
		if(isalpha(str[i]))
		{
			cout<<0;
			return 0;
		}
		if(str[i]=='.')
		{
			cout<<2;
			return 0;
		}
	}
	cout<<1;
}
