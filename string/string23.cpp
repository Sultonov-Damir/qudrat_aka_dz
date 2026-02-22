#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0;
	char ch;
	string str="",st="";
	cin>>str;
	a=str[0]-'0';
	for(int i=1;i<str.size();i+=2)
	{
		if(str[i]=='+') a=a+str[i+1]-'0';
		if(str[i]=='-') a=a-(str[i+1]-'0');
	}
	cout<<a;
}
