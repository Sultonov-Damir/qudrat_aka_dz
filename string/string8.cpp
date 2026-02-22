#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a;
	char ch;
	string str="";
	cin>>a>>ch;
	for(int i=0;i<a;i++)
	{
		str+=ch;
	}
	cout<<str;
}
