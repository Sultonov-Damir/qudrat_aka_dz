#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0;
	char ch;
	string str="",st="";
	cin>>str;
	for(int i=str.size()-1;i>=0;i--)
	{
		a+=str[i]-'0';
	}
	cout<<a;
}
