#include<iostream>
#include<cmath>
using namespace std;

string doubleChar(string& str,char ch)
{
	string st="";
	for(int i=0;i<str.size();i++)
	{
		st+=str[i];
		if(ch==str[i])
		st+=str[i];
	}
	return st;
}

int main()
{
	int a,n1,n2;
	char ch;
	string str="",s1,s2;
	cin>>ch>>str;
	str=doubleChar(str,ch);
	cout<<str;
}
