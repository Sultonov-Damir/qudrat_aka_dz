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
		if(islower(str[i]))
		str[i]=toupper(str[i]);
		else str[i]=tolower(str[i]);
	}
	cout<<str;
}
