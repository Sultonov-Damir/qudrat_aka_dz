#include<iostream>
#include<cmath>
using namespace std;

string stringSwap(string& str,string s1,char ch)
{
	string st="";
	for(int i=0;i<str.size();i++)
	{
		st+=str[i];
	    if(ch==str[i])
		st+=s1;
		
	}
	return st;
}

int main()
{
	int a,n1,n2;
	char ch;
	string str="",s1,s2;
	cin>>ch>>str>>s1;
	str=stringSwap(str,s1,ch);
	cout<<str;
}
