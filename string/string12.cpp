#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a;
	char ch;
	string str="",st="";
	cin>>str>>a;
	st=str[0];
	for(int i=1;i<str.size();i++)
	{
		for(int j=0;j<a;j++)
		{
			st+="*";
		}
		st+=str[i];
	}
	cout<<st;
}
