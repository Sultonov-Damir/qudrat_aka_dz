#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a;
	char ch;
	string str="",st;
	cin>>a>>str;
	if(a>str.size())
	{
		str=string(a-str.size(),'.')+str;
	}
	else if(a<str.size())
	{
		str=str.substr(str.size()-a);
	}
	cout<<str;
}
