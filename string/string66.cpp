#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n1=0,n2=0,s=0;
	char ch;
	string str="",s1="",s2="";
	getline(cin,s1);
	for(int i=0;i<s1.size();i++)
	{
		if(i%2==0) str+=s1[i];
		else s2=s1[i]+s2;
	}
	s1=str+s2;
	cout<<s1;
}
